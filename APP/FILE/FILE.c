//#include "FILE.h"
//#include "delay.h"
//#include "lcd.h"
//#include "gui.h"
//#include "key.h"
////#include "Picture.h"

//#define SIZE sizeof(TEXT_Buffer)	
//void FILE_TASK()
//{
////  ����һ��д��ʹ��	
////  u8 TEXT_Buffer[]={"my18852566109 father1372267854"};
//  u8 key;
//  u8 datatemp[40];
//  delay_init();//Delay init.
//  LCD_Clear(WHITE); //����
//  AT24CXX_Init();			//IIC��ʼ�� 

////����˵�
//LCD_ShowNum(0,0,1,1,16);
//LCD_ShowNum(0,16,2,1,16);
//Show_Str(8, 0, BLACK,WHITE,"note",16,1);
//Show_Str(8, 16, BLACK,WHITE,"picture",16,1);
//	
////ѡ��	
//  key=0;
//while(key==0)
//{
//	key=KEY_Scan();
//} 

//LCD_Clear(WHITE);

////�绰��
//  if(key==1)
//   { 
//while(AT24CXX_Check())//��ⲻ��24c02
//	{
//		Show_Str(0, 0, BLACK, BLUE, "ERROR",16,1);
//		delay_ms(500);	
//	}
//		Show_Str(0, 0, BLACK, BLUE, "PREPARED",16,1);
//	    delay_ms(500);
//	    LCD_Clear(WHITE); //����
//	
//	 while(1)
//        {	
//	
//			//	AT24CXX_Write(0,(u8*)TEXT_Buffer,SIZE);
//			//	Show_Str(0, 0, BLACK, BLUE, "already write",16,1);

//				AT24CXX_Read(0,datatemp,13);
//				delay_ms(200);
//			    LCD_SetWindows(0, 0,128,128);
//				Show_Str(0, 0, BLACK, BLUE, datatemp,16,1);	
//			    AT24CXX_Read(14,datatemp,15);
//			    Show_Str(0, 17, BLACK, BLUE, datatemp,16,1);
//         }		 
//   }

//   //ͼƬ
//   if(key==2)
//	while(1)   
//	{
//        Show_Str(0, 0, BLACK, BLUE, "no picture",16,1);	
//		delay_ms(1000);
//	}




//}