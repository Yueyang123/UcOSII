#include "GPS-BD.h" 
#include "delay.h" 								   								   
#include "stdio.h"	 
#include "stdarg.h"	 
#include "string.h"	 
#include "math.h"
#include "usart.h"		
#include "oled.h"
////////////////////////////////////////////////////////////////////////////////// 	   
GPS_Data User_GPS_Data;
//��buf����õ���cx���������ڵ�λ��
//����ֵ:0~0XFE,������������λ�õ�ƫ��.
//       0XFF,���������ڵ�cx������			
__align(4) u8 dtbuf[50];   								//��ӡ������	
const u8*fixmode_tbl[4]={"Fail","Fail"," 2D "," 3D "};	//fix mode�ַ��� 
nmea_msg gpsx; 
u8 NMEA_Comma_Pos(u8 *buf,u8 cx)
{	 		    
	u8 *p=buf;
	
	while(cx)
	{		 
		if(*buf=='*'||*buf<' '||*buf>'z')return 0XFF;//����'*'���߷Ƿ��ַ�,�򲻴��ڵ�cx������
		if(*buf==',')cx--;
		buf++;
	}
	return buf-p;	 
}
//m^n����
//����ֵ:m^n�η�.
u32 NMEA_Pow(u8 m,u8 n)
{
	u32 result=1;	 
	while(n--)result*=m;    
	return result;
}
//strת��Ϊ����,��','����'*'����
//buf:���ִ洢��
//dx:С����λ��,���ظ����ú���
//����ֵ:ת�������ֵ
int NMEA_Str2num(u8 *buf,u8*dx)
{
	u8 *p=buf;
	u32 ires=0,fres=0;
	u8 ilen=0,flen=0,i;
	u8 mask=0;
	int res;
	while(1) //�õ�������С���ĳ���
	{
		if(*p=='-'){mask|=0X02;p++;}//�Ǹ���
		if(*p==','||(*p=='*'))break;//����������
		if(*p=='.'){mask|=0X01;p++;}//����С������
		else if(*p>'9'||(*p<'0'))	//�зǷ��ַ�
		{	
			ilen=0;
			flen=0;
			break;
		}	
		if(mask&0X01)flen++;
		else ilen++;
		p++;
	}
	if(mask&0X02)buf++;	//ȥ������
	for(i=0;i<ilen;i++)	//�õ�������������
	{  
		ires+=NMEA_Pow(10,ilen-1-i)*(buf[i]-'0');
	}
	if(flen>5)flen=5;	//���ȡ5λС��
	*dx=flen;	 		//С����λ��
	for(i=0;i<flen;i++)	//�õ�С����������
	{  
		fres+=NMEA_Pow(10,flen-1-i)*(buf[ilen+1+i]-'0');
	} 
	res=ires*NMEA_Pow(10,flen)+fres;
	if(mask&0X02)res=-res;		   
	return res;
}	  							 
//����GPGSV��Ϣ
//gpsx:nmea��Ϣ�ṹ��
//buf:���յ���GPS���ݻ������׵�ַ
void NMEA_GPGSV_Analysis(nmea_msg *gpsx,u8 *buf)
{
	u8 *p,*p1,dx;
	u8 len,i,j,slx=0;
	u8 posx;   	 
	p=buf;
	p1=(u8*)strstr((const char *)p,"$GNGSV");
	len=p1[7]-'0';								//�õ�GPGSV������
	posx=NMEA_Comma_Pos(p1,3); 					//�õ��ɼ���������
	if(posx!=0XFF)gpsx->svnum=NMEA_Str2num(p1+posx,&dx);
	for(i=0;i<len;i++)
	{	 
		p1=(u8*)strstr((const char *)p,"$GNGSV");  
		for(j=0;j<4;j++)
		{	  
			posx=NMEA_Comma_Pos(p1,4+j*4);
			if(posx!=0XFF)gpsx->slmsg[slx].num=NMEA_Str2num(p1+posx,&dx);	//�õ����Ǳ��
			else break; 
			posx=NMEA_Comma_Pos(p1,5+j*4);
			if(posx!=0XFF)gpsx->slmsg[slx].eledeg=NMEA_Str2num(p1+posx,&dx);//�õ��������� 
			else break;
			posx=NMEA_Comma_Pos(p1,6+j*4);
			if(posx!=0XFF)gpsx->slmsg[slx].azideg=NMEA_Str2num(p1+posx,&dx);//�õ����Ƿ�λ��
			else break; 
			posx=NMEA_Comma_Pos(p1,7+j*4);
			if(posx!=0XFF)gpsx->slmsg[slx].sn=NMEA_Str2num(p1+posx,&dx);	//�õ����������
			else break;
			slx++;	   
		}   
 		p=p1+1;//�л�����һ��GPGSV��Ϣ
	}   
}
//����GPGGA��Ϣ
//gpsx:nmea��Ϣ�ṹ��
//buf:���յ���GPS���ݻ������׵�ַ
void NMEA_GPGGA_Analysis(nmea_msg *gpsx,u8 *buf)
{
	u8 *p1,dx;			 
	u8 posx;    
	p1=(u8*)strstr((const char *)buf,"$GNGGA");
	posx=NMEA_Comma_Pos(p1,6);								//�õ�GPS״̬
	if(posx!=0XFF)gpsx->gpssta=NMEA_Str2num(p1+posx,&dx);	
	posx=NMEA_Comma_Pos(p1,7);								//�õ����ڶ�λ��������
	if(posx!=0XFF)gpsx->posslnum=NMEA_Str2num(p1+posx,&dx); 
	posx=NMEA_Comma_Pos(p1,9);								//�õ����θ߶�
	if(posx!=0XFF)gpsx->altitude=NMEA_Str2num(p1+posx,&dx);  
}
//����GPGSA��Ϣ
//gpsx:nmea��Ϣ�ṹ��
//buf:���յ���GPS���ݻ������׵�ַ
void NMEA_GPGSA_Analysis(nmea_msg *gpsx,u8 *buf)
{
	u8 *p1,dx;			 
	u8 posx; 
	//u8 i;   
	p1=(u8*)strstr((const char *)buf,"$GNGSA");
	posx=NMEA_Comma_Pos(p1,2);								//�õ���λ����
	if(posx!=0XFF)gpsx->fixmode=NMEA_Str2num(p1+posx,&dx);	
}
//����GPRMC��Ϣ
//gpsx:nmea��Ϣ�ṹ��
//buf:���յ���GPS���ݻ������׵�ַ
//����ֵ��0��ȡ��1��ʱ�䣻1ʧ��
u8 NMEA_GPRMC_Analysis(nmea_msg *gpsx,u8 *buf)
{
	u8 *p1,dx;			 
	u8 posx;     
	u32 temp;	   
	//u8 gps_date_time[7];
	u8 sta_get_date_time=0;	//0--δ��ȡ��1-ֻ��ȡ��time,2-ֻ��ȡ��DATE��3-���ȡ��ȫ��
	float rs;  
	p1=(u8*)strstr((const char *)buf,"RMC");//"$GPRMC",������&��GPRMC�ֿ������,��ֻ�ж�GPRMC.
	posx=NMEA_Comma_Pos(p1,1);								//�õ�UTCʱ��
	if(posx!=0XFF)
	{
		NMEA_Str2num(p1+posx,&dx)/NMEA_Pow(10,dx);	 	//�õ�UTCʱ��,ȥ��ms	
		gpsx->utc.hour=(*(p1+posx+0)-0x30)*10+(*(p1+posx+1)-0x30);
		gpsx->utc.min=(*(p1+posx+2)-0x30)*10+(*(p1+posx+3)-0x30);
		gpsx->utc.sec=(*(p1+posx+4)-0x30)*10+(*(p1+posx+5)-0x30); 
		sta_get_date_time=1;		
	}	
	posx=NMEA_Comma_Pos(p1,9);								//�õ�UTC����
	if(posx!=0XFF)
	{
		NMEA_Str2num(p1+posx,&dx);		 				//�õ�UTC����
		gpsx->utc.date=(*(p1+posx+0)-0x30)*10+(*(p1+posx+1)-0x30);
		gpsx->utc.month=(*(p1+posx+2)-0x30)*10+(*(p1+posx+3)-0x30);
	  gpsx->utc.year=(*(p1+posx+4)-0x30)*10+(*(p1+posx+5)-0x30);			
		if(sta_get_date_time==1)	sta_get_date_time=3;
		else sta_get_date_time=2;
	}
	posx=NMEA_Comma_Pos(p1,3);								//�õ�γ��
	if(posx!=0XFF)
	{
		temp=NMEA_Str2num(p1+posx,&dx);		 	 
		gpsx->latitude=temp/NMEA_Pow(10,dx+2);	//�õ���
		rs=temp%NMEA_Pow(10,dx+2);				//�õ�'		 
		gpsx->latitude=gpsx->latitude*NMEA_Pow(10,5)+(rs*NMEA_Pow(10,5-dx))/60;//ת��Ϊ�� 
	
	}
	posx=NMEA_Comma_Pos(p1,4);								//��γ���Ǳ�γ 
	if(posx!=0XFF)	User_GPS_Data.nshemi=gpsx->nshemi=*(p1+posx);					 			
 	posx=NMEA_Comma_Pos(p1,5);								//�õ�����
	if(posx!=0XFF)
	{												  
		temp=NMEA_Str2num(p1+posx,&dx);		 	 
		gpsx->longitude=temp/NMEA_Pow(10,dx+2);	//�õ���
		rs=temp%NMEA_Pow(10,dx+2);				//�õ�'		 
		gpsx->longitude=gpsx->longitude*NMEA_Pow(10,5)+(rs*NMEA_Pow(10,5-dx))/60;//ת��Ϊ�� 
		
	}
	posx=NMEA_Comma_Pos(p1,6);								//������������
	if(posx!=0XFF)	User_GPS_Data.ewhemi=gpsx->ewhemi=*(p1+posx);		 	
	posx=NMEA_Comma_Pos(p1,2);								//�õ��Ƿ�λ״̬
	if(posx!=0XFF)
	{	
		if(*(p1+posx)=='A')	
		{
			User_GPS_Data.fix_mode=1;	
			User_GPS_Data.latitude=gpsx->latitude;
			User_GPS_Data.longitude=gpsx->longitude;
			gpsx->fixmode=2;//��λ			
		}
		else 
		{			
			User_GPS_Data.fix_mode=0;
			User_GPS_Data.longitude=User_GPS_Data.latitude=0;
			gpsx->fixmode=0;		
		}
		if((sta_get_date_time==3)&&(gpsx->fixmode==2))	return 0;	//��ȡ�����ں�ʱ�䲢���Ѿ���λ
		else return 1;
	}	
	return 1;
}
//����GPVTG��Ϣ
//gpsx:nmea��Ϣ�ṹ��
//buf:���յ���GPS���ݻ������׵�ַ
void NMEA_GPVTG_Analysis(nmea_msg *gpsx,u8 *buf)
{
	u8 *p1,dx;			 
	u8 posx;    
	p1=(u8*)strstr((const char *)buf,"$GPVTG");							 
	posx=NMEA_Comma_Pos(p1,7);								//�õ���������
	if(posx!=0XFF)
	{
		gpsx->speed=NMEA_Str2num(p1+posx,&dx);
		if(dx<3)gpsx->speed*=NMEA_Pow(10,3-dx);	 	 		//ȷ������1000��
	}
}  
//��ȡNMEA-0183��Ϣ
//gpsx:nmea��Ϣ�ṹ��
//buf:���յ���GPS���ݻ������׵�ַ
u8 GPS_Analysis(nmea_msg *gpsx,u8 *buf)
{
	NMEA_GPGSV_Analysis(gpsx,buf);	//GPGSV����
	NMEA_GPGGA_Analysis(gpsx,buf);	//GPGGA���� 	
	NMEA_GPGSA_Analysis(gpsx,buf);	//GPGSA����
	if(NMEA_GPRMC_Analysis(gpsx,buf))	
		;//return 1;	//��ȡʧ��
	//else 
	return 0;
//	NMEA_GPVTG_Analysis(gpsx,buf);	//GPVTG����
}

//GPSУ��ͼ���
//buf:���ݻ������׵�ַ
//len:���ݳ���
//cka,ckb:����У����.
void Ublox_CheckSum(u8 *buf,u16 len,u8* cka,u8*ckb)
{
	u16 i;
	*cka=0;*ckb=0;
	for(i=0;i<len;i++)
	{
		*cka=*cka+buf[i];
		*ckb=*ckb+*cka;
	}
}
//�����10����ʱ�䣬������BCD��ʱ��
void UTC2BTC(nmea_utc_time *GPS)
{
	GPS->sec++;
	if(GPS->sec>59)
	{
		GPS->sec=0;
		GPS->min++;
		if(GPS->min>59)
		{
			GPS->min=0;
			GPS->hour++;
		}
	}
	GPS->hour+=8;
	/*???????????8???,???8???*/
	if(GPS->hour>23)
	{
		GPS->hour=0;
		GPS->date+=1;
	}
	if(GPS->month==2)	/*????*/
	{
		if(GPS->year%100==0)		
		{
			if(GPS->year%400==0)
			{
				if(GPS->date>29)
				{
					GPS->date=1;
					GPS->month++;
				}
			}
			else
			{
				if(GPS->date>28)
				{
					GPS->date=1;
					GPS->month++;
				}
			}			
		}
		else
		{
			if(GPS->year%4==0)
			{
				if(GPS->date>29)
				{
					GPS->date=1;
					GPS->month++;
				}
			}
			else
			{
				if(GPS->date>28)
				{
					GPS->date=1;
				  GPS->month++;
			  }
			}
		}
	}
	else if(GPS->month==4||GPS->month==6||GPS->month==9||GPS->month==11)
	{
		if(GPS->date>30)
		{
			GPS->date=1;
			GPS->month++;
		}
	}
	else if(GPS->month==1||GPS->month==3||GPS->month==5||GPS->month==7||GPS->month==8||GPS->month==10||GPS->month==12)
	{
		if(GPS->date>31)
		{
			GPS->date=1;
			GPS->month++;
		}
	}	
	if(GPS->month>12)
	{
		GPS->month=1;
		GPS->year++;
	}
	GPS->year=(GPS->year/10)*16+(GPS->year%10);
	GPS->month=(GPS->month/10)*16+(GPS->month%10);
	GPS->date=(GPS->date/10)*16+(GPS->date%10);
	GPS->hour=(GPS->hour/10)*16+(GPS->hour%10);
	GPS->min=(GPS->min/10)*16+(GPS->min%10);
	GPS->sec=(GPS->sec/10)*16+(GPS->sec%10);
}

//��ʾGPS��λ��Ϣ 
void Gps_Msg_Show(void)
{
 	float tp;		   
	//POINT_COLOR=BLUE;  	 
	tp=gpsx.longitude;	   
	sprintf((char *)dtbuf,"Lon:%.5f %1c   ",tp/=100000,gpsx.ewhemi);	//�õ������ַ���
 //	OLED_ShowString(0,0,dtbuf);
	//LCD_ShowString(30,130,200,16,16,dtbuf);	 	   
	tp=gpsx.latitude;	   
	sprintf((char *)dtbuf,"Lat:%.5f %1c   ",tp/=100000,gpsx.nshemi);	//�õ�γ���ַ���
 //	OLED_ShowString(0,2,dtbuf);
	//LCD_ShowString(30,150,200,16,16,dtbuf);	 	 
	tp=gpsx.altitude;	   
 	sprintf((char *)dtbuf,"Altitude:%.1fm     ",tp/=10);	    			//�õ��߶��ַ���
 	//LCD_ShowString(30,170,200,16,16,dtbuf);	 			   
	tp=gpsx.speed;	   
 	sprintf((char *)dtbuf,"Speed:%.3fkm/h     ",tp/=1000);		    		//�õ��ٶ��ַ���	 
 	//LCD_ShowString(30,190,200,16,16,dtbuf);	 				    
	if(gpsx.fixmode<=3)														//��λ״̬
	{  
		sprintf((char *)dtbuf,"Fix Mode:%s",fixmode_tbl[gpsx.fixmode]);	
	  //LCD_ShowString(30,210,200,16,16,dtbuf);			   
	}	 	   
	//OLED_ShowString(0,4,dtbuf);
	sprintf((char *)dtbuf,"Valid satellite:%02d",gpsx.posslnum);	 		//���ڶ�λ��������
 	//LCD_ShowString(30,230,200,16,16,dtbuf);	    
	sprintf((char *)dtbuf,"Visible satellite:%02d",gpsx.svnum%100);	 		//�ɼ�������
 	//LCD_ShowString(30,250,200,16,16,dtbuf);		 
	sprintf((char *)dtbuf,"UDate:%02d/%02d/%02d",gpsx.utc.year,gpsx.utc.month,gpsx.utc.date);	//��ʾUTC����
	//OLED_ShowString(0,4,dtbuf);
	//printf("year2:%d\r\n",gpsx.utc.year);
	//LCD_ShowString(30,270,200,16,16,dtbuf);		    
	sprintf((char *)dtbuf,"UTime:%02d:%02d:%02d",gpsx.utc.hour,gpsx.utc.min,gpsx.utc.sec);	//��ʾUTCʱ��
  //OLED_ShowString(0,6,dtbuf);
	//LCD_ShowString(30,290,200,16,16,dtbuf);		  
}	 

void GPS_task(void )
{	
	u16 i,rxlen;
//	u8 sys_date[4],sys_time[4];
	u8 USART1_TX_BUF[USART3_MAX_RECV_LEN]; 					//����1,���ͻ�����
  //nmea_msg gpsx;	
	if(USART_RX_STA&0X8000)		//���յ�һ��������
	//if(1)
	{
		rxlen=USART_RX_STA&0X7FFF;	//�õ����ݳ���
		for(i=0;i<rxlen;i++)USART1_TX_BUF[i]=USART_RX_BUF[i];	   
		USART_RX_STA=0;		   	//������һ�ν���
		USART1_TX_BUF[i]=0;			//�Զ����ӽ�����
		if(!GPS_Analysis(&gpsx,(u8*)USART1_TX_BUF))
		{
			Gps_Msg_Show();				
		}			
	}

  //OSTaskDel(OS_PRIO_SELF);	
}






