#include "music.h"
#include "delay.h"
#include "key.h"
#include "lcd.h"
#include "gui.h"
/**********************************************************************************
���ļ�����MP3���ܵ�ʵ��
Ӳ�����ӣ���һ·PB8������JBO9800��ͨ��
ʱ�䣺2019/5/15
���ߣ���Խ
***************************************************************************/
void OnUart_GPIO(void)
{

 
  GPIO_InitTypeDef GPIO_InitStructure;
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8; //PA.9
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;	//�����������
  GPIO_Init(GPIOB, &GPIO_InitStructure);//��ʼ��GPIOA.9
  GPIOB->ODR=~(1<<8);        //B.11��	
	
	
}




void SendData ( u8 addr )//���ͺ�����
{
    u8 i;
 
     /*����ʱ�ص��жϣ���ֹ�ж�Ӱ��ʱ��  */
    SDA = 1; /*��ʼ����*/
    delay_us (1000);
    SDA = 0; /*��ʼ������*/
    delay_ms (3);/*�˴���ʱ����Ҫ����2ms*/
    for ( i = 0; i < 8; i++ ) /*�ܹ�8λ����  */
    {
        SDA = 1;
        if ( addr & 0x01 ) /*3:1��ʾ����λ1,ÿ��λ�����������ʾ  */
        {
            delay_us (600);
            SDA = 0;
            delay_us (200);
        }
        else              /*1��3��ʾ����λ0 ,ÿ��λ�����������ʾ  */
        {
            delay_us (200);
            SDA = 0;
            delay_us (600);
        }
        addr >>= 1;
    }
    SDA = 1;
    
		//�ָ��ж�
}

/**********************************************************************************
�ú�������MP3�����ʵ��
ʱ�䣺2019/5/15
���ߣ���Խ
***************************************************************************/
void music1(void)
{
	
		SendData(0x0a);
		SendData(0x01);
		SendData(0x0b);

}


void music2(void)
{
	
		SendData(0x0a);
		SendData(0x02);
		SendData(0x0b);
}

void music3(void)
{
	
		SendData(0x0a);
		SendData(0x03);
		SendData(0x0b);

}

void music4(void)
{
	
		SendData(0x0a);
		SendData(0x04);
		SendData(0x0b);
}

void music5(void)
{
	
		SendData(0x0a);
		SendData(0x05);
		SendData(0x0b);
}

void music6(void)
{
	
		SendData(0x0a);
		SendData(0x06);
		SendData(0x0b);
	    delay_ms(1000);
}


void soundoff(void)
{
	
		SendData(0x0a);
		SendData(0x00);
	    SendData(0x00);
		SendData(0x0c);
}

void soundloud(void)
{
	
		SendData(0x0a);
		SendData(0x03);
	    SendData(0x00);
		SendData(0x0c);
}


void sounddown(void)
{
	
		SendData(0x0a);
		SendData(0x01);
	    SendData(0x00);
		SendData(0x0c);
}

void soundup(void)
{
	
		SendData(0x0a);
		SendData(0x02);
	    SendData(0x00);
		SendData(0x0c);
}


void MUSIC_TASK(void)
{
    u8 keystore;//����һ�������ڴ�ż�ֵ
	u8 flag=0;//�����ж�MP3��ǰ״̬
	while(1)
	{
	if(flag==0)
	{
	LCD_Clear(YELLOW);
	Gui_StrCenter(0, 0,BLUE, WHITE, "��ӭʹ��",16,0);
	Gui_StrCenter(0, 16,BLUE, WHITE, "���ֲ��Ź���",16,0);
    Gui_StrCenter(0, 32,BLUE, WHITE, "��ѡ����Ŀ",16,0);
	}
	else
	{
		LCD_Clear(GREEN);
		Gui_StrCenter(0, 32,BLUE, WHITE, "����������",16,0);
	}

	keystore=KEY_Scan();
	switch(keystore)
		{
	  case 1: music1();break;
	  case 2: music2();break;
	  case 3: music3();break;
	  case 4: music4();break;	  
	  case 5: music5();break;
	  case 6: music6();break;
      case 7: sounddown();break;
	  case 8: soundup();break;
	  case 9: soundoff();break;
	  case 10: soundloud();break;
	  
	  default : printf("Ϲ��");break;
        }	
		flag=1;
	

	
    }

}
	



