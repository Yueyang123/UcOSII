#include "music.h"
#include "delay.h"
#include "key.h"
#include "lcd.h"
#include "gui.h"
/**********************************************************************************
该文件用于MP3功能的实现
硬件连接：开一路PB8用于与JBO9800的通信
时间：2019/5/15
作者：杨越
***************************************************************************/
void OnUart_GPIO(void)
{

 
  GPIO_InitTypeDef GPIO_InitStructure;
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8; //PA.9
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;	//复用推挽输出
  GPIO_Init(GPIOB, &GPIO_InitStructure);//初始化GPIOA.9
  GPIOB->ODR=~(1<<8);        //B.11低	
	
	
}




void SendData ( u8 addr )//发送函数。
{
    u8 i;
 
     /*发送时关掉中断，防止中断影响时序  */
    SDA = 1; /*开始拉高*/
    delay_us (1000);
    SDA = 0; /*开始引导码*/
    delay_ms (3);/*此处延时最少要大于2ms*/
    for ( i = 0; i < 8; i++ ) /*总共8位数据  */
    {
        SDA = 1;
        if ( addr & 0x01 ) /*3:1表示数据位1,每个位用两个脉冲表示  */
        {
            delay_us (600);
            SDA = 0;
            delay_us (200);
        }
        else              /*1：3表示数据位0 ,每个位用两个脉冲表示  */
        {
            delay_us (200);
            SDA = 0;
            delay_us (600);
        }
        addr >>= 1;
    }
    SDA = 1;
    
		//恢复中断
}

/**********************************************************************************
该函数用于MP3任务的实现
时间：2019/5/15
作者：杨越
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
    u8 keystore;//定义一个数用于存放键值
	u8 flag=0;//用于判断MP3当前状态
	while(1)
	{
	if(flag==0)
	{
	LCD_Clear(YELLOW);
	Gui_StrCenter(0, 0,BLUE, WHITE, "欢迎使用",16,0);
	Gui_StrCenter(0, 16,BLUE, WHITE, "音乐播放功能",16,0);
    Gui_StrCenter(0, 32,BLUE, WHITE, "请选择曲目",16,0);
	}
	else
	{
		LCD_Clear(GREEN);
		Gui_StrCenter(0, 32,BLUE, WHITE, "请欣赏音乐",16,0);
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
	  
	  default : printf("瞎搞");break;
        }	
		flag=1;
	

	
    }

}
	



