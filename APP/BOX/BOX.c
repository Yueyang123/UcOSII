#include "BOX.h"
#include "sys.h"
#include "lcd.h"
#include "gui.h"
#include "adc.h"
#include "stdlib.h"
#include "delay.h"


/***********************************************************
说明：以下函数用于基础图形绘制
**********************************************************/

void Draw_realbox1(u16 x,u16 y)
{
	u8 i,n;
	for(i=1;i<=3;i++)
	{
		for(n=1;n<=3;n++)
		{
			GUI_DrawPoint((x+i),(y+n),GRAY);	
		}	
	}
	for(i=0;i<=4;i++)
	{
		GUI_DrawPoint((x+i),y,BLACK	);
		GUI_DrawPoint((x+i),(y+4),BLACK	);		
		GUI_DrawPoint(x,(y+i),BLACK	);		
		GUI_DrawPoint((x+4),(y+i),BLACK	);				
	}	
}


/*************************************************
函数名 Deal_realbox
功能：删除一个俄罗斯方块；
入口参数：xy坐标
返回值：无
*************************************************/

void Deal_realbox1(u16 x,u16 y)
{
	u8 i,n;
	for(i=0;i<=4;i++)
	{
		for(n=0;n<=4;n++)
		{
			GUI_DrawPoint((x+i),(y+n),WHITE);	
		}	
	}
}




void Draw_tuxing1(u16 x,u16 y,u8 what)
{
	switch (what)
	{
		case 1:
		{
		Draw_realbox1(x,y);
		Draw_realbox1(x+5,y);
		Draw_realbox1(x,y+5);
		Draw_realbox1(x+5,y+5);
		}
		break;
		
		case 2:
		{
		Draw_realbox1(x,y);
		Draw_realbox1(x+5,y);
		Draw_realbox1(x+10,y);
		Draw_realbox1(x+15,y);
		}
		break;
		
		case 3:
		{
		Draw_realbox1(x,y);
		Draw_realbox1(x,y+5);
		Draw_realbox1(x,y+10);
		Draw_realbox1(x,y+15);
		}
		break;
		
		case 4:
		{
		Draw_realbox1(x+5,y);
		Draw_realbox1(x,y+5);
		Draw_realbox1(x+5,y+5);
		Draw_realbox1(x+10,y+5);
		}
		break;
		
		case 5:
		{
		Draw_realbox1(x+5,y+5);
		Draw_realbox1(x,y);
		Draw_realbox1(x,y+5);
		Draw_realbox1(x,y+10);
		}
		break;

		case 6:
		{
		Draw_realbox1(x,y+5);
		Draw_realbox1(x+5,y);
		Draw_realbox1(x+5,y+5);
		Draw_realbox1(x+5,y+10);
		}
		break;
		
		case 7:
		{
		Draw_realbox1(x+5,y+5);
		Draw_realbox1(x,y);
		Draw_realbox1(x+5,y);
		Draw_realbox1(x+10,y);
		}
		break;
	
		case 8:
		{
		Draw_realbox1(x,y);
		Draw_realbox1(x,y+5);
		Draw_realbox1(x,y+10);
		Draw_realbox1(x+5,y+10);
		}
		break;
		
		case 9:
		{
		Draw_realbox1(x,y);
		Draw_realbox1(x,y+5);
		Draw_realbox1(x+5,y);
		Draw_realbox1(x+10,y);
		}
		break;
		
		case 10:
		{
		Draw_realbox1(x,y);
		Draw_realbox1(x+5,y);
		Draw_realbox1(x+5,y+5);
		Draw_realbox1(x+5,y+10);
		}
		break;
		
		case 11:
		{
		Draw_realbox1(x,y+5);
		Draw_realbox1(x+5,y+5);
		Draw_realbox1(x+10,y+5);
		Draw_realbox1(x+10,y);
		}
		break;
		
		case 12:
		{
		Draw_realbox1(x+5,y);
		Draw_realbox1(x+5,y+5);
		Draw_realbox1(x+5,y+10);
		Draw_realbox1(x,y+10);
		}
		break;
		
		case 13:
		{
		Draw_realbox1(x,y);
		Draw_realbox1(x+5,y);
		Draw_realbox1(x+10,y);
		Draw_realbox1(x+10,y+5);
		}
		break;
		
		case 14:
		{
		Draw_realbox1(x,y);
		Draw_realbox1(x+5,y);
		Draw_realbox1(x,y+5);
		Draw_realbox1(x,y+10);
		}
		break;
		
		case 15:
		{
		Draw_realbox1(x,y);
		Draw_realbox1(x,y+5);
		Draw_realbox1(x+5,y+5);
		Draw_realbox1(x+10,y+5);
		}
		break;
		
		
		case 16:
		{
		Draw_realbox1(x+5,y);
		Draw_realbox1(x,y+5);
		Draw_realbox1(x+5,y+5);
		Draw_realbox1(x,y+10);
		}
		break;
		
		case 17:
		{
		Draw_realbox1(x,y);
		Draw_realbox1(x+5,y);
		Draw_realbox1(x+5,y+5);
		Draw_realbox1(x+10,y+5);
		}
		break;
		
		case 18:
		{
		Draw_realbox1(x,y);
		Draw_realbox1(x,y+5);
		Draw_realbox1(x+5,y+5);
		Draw_realbox1(x+5,y+10);
		}
		break;
		
		case 19:
		{
		Draw_realbox1(x,y+5);
		Draw_realbox1(x+5,y+5);
		Draw_realbox1(x+5,y);
		Draw_realbox1(x+10,y);
		}
		break;
	
	
	
	
	}

}



void Deal_tuxing1(u16 x,u16 y,u8 what)
{
	switch (what)
	{
		case 1:
		{
		Deal_realbox1(x,y);
		Deal_realbox1(x+5,y);
		Deal_realbox1(x,y+5);
		Deal_realbox1(x+5,y+5);
		}
		break;
		
		case 2:
		{
		Deal_realbox1(x,y);
		Deal_realbox1(x+5,y);
		Deal_realbox1(x+10,y);
		Deal_realbox1(x+15,y);
		}
		break;
		
		case 3:
		{
		Deal_realbox1(x,y);
		Deal_realbox1(x,y+5);
		Deal_realbox1(x,y+10);
		Deal_realbox1(x,y+15);
		}
		break;
		
		case 4:
		{
		Deal_realbox1(x+5,y);
		Deal_realbox1(x,y+5);
		Deal_realbox1(x+5,y+5);
		Deal_realbox1(x+10,y+5);
		}
		break;
		
		case 5:
		{
		Deal_realbox1(x+5,y+5);
		Deal_realbox1(x,y);
		Deal_realbox1(x,y+5);
		Deal_realbox1(x,y+10);
		}
		break;

		case 6:
		{
		Deal_realbox1(x,y+5);
		Deal_realbox1(x+5,y);
		Deal_realbox1(x+5,y+5);
		Deal_realbox1(x+5,y+10);
		}
		break;
		
		case 7:
		{
		Deal_realbox1(x+5,y+5);
		Deal_realbox1(x,y);
		Deal_realbox1(x+5,y);
		Deal_realbox1(x+10,y);
		}
		break;
	
		case 8:
		{
		Deal_realbox1(x,y);
		Deal_realbox1(x,y+5);
		Deal_realbox1(x,y+10);
		Deal_realbox1(x+5,y+10);
		}
		break;
		
		case 9:
		{
		Deal_realbox1(x,y);
		Deal_realbox1(x,y+5);
		Deal_realbox1(x+5,y);
		Deal_realbox1(x+10,y);
		}
		break;
		
		case 10:
		{
		Deal_realbox1(x,y);
		Deal_realbox1(x+5,y);
		Deal_realbox1(x+5,y+5);
		Deal_realbox1(x+5,y+10);
		}
		break;
		
		case 11:
		{
		Deal_realbox1(x,y+5);
		Deal_realbox1(x+5,y+5);
		Deal_realbox1(x+10,y+5);
		Deal_realbox1(x+10,y);
		}
		break;
		
		case 12:
		{
		Deal_realbox1(x+5,y);
		Deal_realbox1(x+5,y+5);
		Deal_realbox1(x+5,y+10);
		Deal_realbox1(x,y+10);
		}
		break;
		
		case 13:
		{
		Deal_realbox1(x,y);
		Deal_realbox1(x+5,y);
		Deal_realbox1(x+10,y);
		Deal_realbox1(x+10,y+5);
		}
		break;
		
		case 14:
		{
		Deal_realbox1(x,y);
		Deal_realbox1(x+5,y);
		Deal_realbox1(x,y+5);
		Deal_realbox1(x,y+10);
		}
		break;
		
		case 15:
		{
		Deal_realbox1(x,y);
		Deal_realbox1(x,y+5);
		Deal_realbox1(x+5,y+5);
		Deal_realbox1(x+10,y+5);
		}
		break;
		
		
		case 16:
		{
		Deal_realbox1(x+5,y);
		Deal_realbox1(x,y+5);
		Deal_realbox1(x+5,y+5);
		Deal_realbox1(x,y+10);
		}
		break;
		
		case 17:
		{
		Deal_realbox1(x,y);
		Deal_realbox1(x+5,y);
		Deal_realbox1(x+5,y+5);
		Deal_realbox1(x+10,y+5);
		}
		break;
		
		case 18:
		{
		Deal_realbox1(x,y);
		Deal_realbox1(x,y+5);
		Deal_realbox1(x+5,y+5);
		Deal_realbox1(x+5,y+10);
		}
		break;
		
		case 19:
		{
		Deal_realbox1(x,y+5);
		Deal_realbox1(x+5,y+5);
		Deal_realbox1(x+5,y);
		Deal_realbox1(x+10,y);
		}
		break;
	
	
	}

}


/*************************************************
函数名 Down_mov
功能：
入口参数：xy坐标
返回值：无
*************************************************/


void Down_tuxing_move(u16 x,u16 y,u8 what)
{
	Deal_tuxing1(x,y,what);
	Draw_tuxing1(x,y+5,what);
}

/*************************************************
函数名 Left_mov
功能：
入口参数：xy坐标
返回值：无
*************************************************/


void Left_tuxing_move(u16 x,u16 y,u8 what)
{
	Deal_tuxing1(x,y,what);
	Draw_tuxing1(x-5,y,what);
}

/*************************************************
函数名 Right_mov
功能：
入口参数：xy坐标
返回值：无
*************************************************/

void Right_tuxing_move(u16 x,u16 y,u8 what)
{
	Deal_tuxing1(x,y,what);
	Draw_tuxing1(x+5,y,what);
}


/***************************************************************
说明下列函数用于对状态二维数组的处理
*******************************************************************/


u8 what,speed=80,i=0,game2=1,leave=1,suijishu[5]={1,2,3,4,5},RAND=1;
u16 x=60,y=0,fengshu=0;
u8 shuaxing=0;
u8 zhuangtai[20][20]=
{
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},//**********0**********//
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},//**********1**********//
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},//**********2**********//
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},//**********3**********//
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},//**********4**********//
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},//**********5**********//
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},//**********6**********//
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},//**********7**********//
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},//**********8**********//
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},//**********9**********//
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},//**********10**********//
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},//**********11**********//
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},//**********12**********//
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},//**********13**********//
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},//**********14**********//
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},//**********15**********//
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},//**********16**********//
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},//**********17**********//
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},//**********18**********//
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},//**********19**********//
};




/*************************************************
功能：更新一个状态到数组
*************************************************/
void Draw_a_zhuangtai(u16 x,u16 y)
{
	  zhuangtai[y/5][x/5]=1;
}


/*************************************************
功能：删除一个状态到数组
*************************************************/
void Deal_a_zhuangtai(u16 x,u16 y)
{
	  zhuangtai[y/5][x/5]=0;
}



/*************************************************
功能：画对应的状态图形
*************************************************/
void Draw_zhuangtai_tuxing(u16 x,u16 y,u8 what)
{
	switch (what)
	{
		case 1:
		{
		Draw_a_zhuangtai(x,y);
		Draw_a_zhuangtai(x+5,y);
		Draw_a_zhuangtai(x,y+5);
		Draw_a_zhuangtai(x+5,y+5);
		}
		break;
		
		case 2:
		{
		Draw_a_zhuangtai(x,y);
		Draw_a_zhuangtai(x+5,y);
		Draw_a_zhuangtai(x+10,y);
		Draw_a_zhuangtai(x+15,y);
		}
		break;
		
		case 3:
		{
		Draw_a_zhuangtai(x,y);
		Draw_a_zhuangtai(x,y+5);
		Draw_a_zhuangtai(x,y+10);
		Draw_a_zhuangtai(x,y+15);
		}
		break;
		
		case 4:
		{
		Draw_a_zhuangtai(x+5,y);
		Draw_a_zhuangtai(x,y+5);
		Draw_a_zhuangtai(x+5,y+5);
		Draw_a_zhuangtai(x+5,y+5);
		}
		break;
		
		case 5:
		{
		Draw_a_zhuangtai(x+5,y+5);
		Draw_a_zhuangtai(x,y);
		Draw_a_zhuangtai(x,y+5);
		Draw_a_zhuangtai(x,y+10);
		}
		break;

		case 6:
		{
		Draw_a_zhuangtai(x,y+5);
		Draw_a_zhuangtai(x+5,y);
		Draw_a_zhuangtai(x+5,y+5);
		Draw_a_zhuangtai(x+5,y+10);
		}
		break;
		
		case 7:
		{
		Draw_a_zhuangtai(x+5,y+5);
		Draw_a_zhuangtai(x,y);
		Draw_a_zhuangtai(x+5,y);
		Draw_a_zhuangtai(x+10,y);
		}
		break;
	
		case 8:
		{
		Draw_a_zhuangtai(x,y);
		Draw_a_zhuangtai(x,y+5);
		Draw_a_zhuangtai(x,y+10);
		Draw_a_zhuangtai(x+5,y+10);
		}
		break;
		
		case 9:
		{
		Draw_a_zhuangtai(x,y);
		Draw_a_zhuangtai(x,y+5);
		Draw_a_zhuangtai(x+5,y);
		Draw_a_zhuangtai(x+10,y);
		}
		break;
		
		case 10:
		{
		Draw_a_zhuangtai(x,y);
		Draw_a_zhuangtai(x+5,y);
		Draw_a_zhuangtai(x+5,y+5);
		Draw_a_zhuangtai(x+5,y+10);
		}
		break;
		
		case 11:
		{
		Draw_a_zhuangtai(x,y+5);
		Draw_a_zhuangtai(x+5,y+5);
		Draw_a_zhuangtai(x+10,y+5);
		Draw_a_zhuangtai(x+10,y);
		}
		break;
		
		case 12:
		{
		Draw_a_zhuangtai(x+5,y);
		Draw_a_zhuangtai(x+5,y+5);
		Draw_a_zhuangtai(x+5,y+10);
		Draw_a_zhuangtai(x,y+10);
		}
		break;
		
		case 13:
		{
		Draw_a_zhuangtai(x,y);
		Draw_a_zhuangtai(x+5,y);
		Draw_a_zhuangtai(x+10,y);
		Draw_a_zhuangtai(x+10,y+5);
		}
		break;
		
		case 14:
		{
		Draw_a_zhuangtai(x,y);
		Draw_a_zhuangtai(x+5,y);
		Draw_a_zhuangtai(x,y+5);
		Draw_a_zhuangtai(x,y+10);
		}
		break;
		
		case 15:
		{
		Draw_a_zhuangtai(x,y);
		Draw_a_zhuangtai(x,y+5);
		Draw_a_zhuangtai(x+5,y+5);
		Draw_a_zhuangtai(x+5,y+5);
		}
		break;
		
		
		case 16:
		{
		Draw_a_zhuangtai(x+5,y);
		Draw_a_zhuangtai(x,y+5);
		Draw_a_zhuangtai(x+5,y+5);
		Draw_a_zhuangtai(x,y+10);
		}
		break;
		
		case 17:
		{
		Draw_a_zhuangtai(x,y);
		Draw_a_zhuangtai(x+5,y);
		Draw_a_zhuangtai(x+5,y+5);
		Draw_a_zhuangtai(x+10,y+5);
		}
		break;
		
		case 18:
		{
		Draw_a_zhuangtai(x,y);
		Draw_a_zhuangtai(x,y+5);
		Draw_a_zhuangtai(x+5,y+5);
		Draw_a_zhuangtai(x+5,y+10);
		}
		break;
		
		case 19:
		{
		Draw_a_zhuangtai(x,y+5);
		Draw_a_zhuangtai(x+5,y+5);
		Draw_a_zhuangtai(x+5,y);
		Draw_a_zhuangtai(x+10,y);
		}
		break;
	
	
	
	
	}

}



/*************************************************
功能：删除对应的状态图形
*************************************************/
void Deal_zhuangtai_tuxing(u16 x,u16 y,u8 what)
{
	switch (what)
	{
		case 1:
		{
		Deal_a_zhuangtai(x,y);
		Deal_a_zhuangtai(x+5,y);
		Deal_a_zhuangtai(x,y+5);
		Deal_a_zhuangtai(x+5,y+5);
		}
		break;
		
		case 2:
		{
		Deal_a_zhuangtai(x,y);
		Deal_a_zhuangtai(x+5,y);
		Deal_a_zhuangtai(x+10,y);
		Deal_a_zhuangtai(x+15,y);
		}
		break;
		
		case 3:
		{
		Deal_a_zhuangtai(x,y);
		Deal_a_zhuangtai(x,y+5);
		Deal_a_zhuangtai(x,y+10);
		Deal_a_zhuangtai(x,y+15);
		}
		break;
		
		case 4:
		{
		Deal_a_zhuangtai(x+5,y);
		Deal_a_zhuangtai(x,y+5);
		Deal_a_zhuangtai(x+5,y+5);
		Deal_a_zhuangtai(x+10,y+5);
		}
		break;
		
		case 5:
		{
		Deal_a_zhuangtai(x+5,y+5);
		Deal_a_zhuangtai(x,y);
		Deal_a_zhuangtai(x,y+5);
		Deal_a_zhuangtai(x,y+10);
		}
		break;

		case 6:
		{
		Deal_a_zhuangtai(x,y+5);
		Deal_a_zhuangtai(x+5,y);
		Deal_a_zhuangtai(x+5,y+5);
		Deal_a_zhuangtai(x+5,y+10);
		}
		break;
		
		case 7:
		{
		Deal_a_zhuangtai(x+5,y+5);
		Deal_a_zhuangtai(x,y);
		Deal_a_zhuangtai(x+5,y);
		Deal_a_zhuangtai(x+10,y);
		}
		break;
	
		case 8:
		{
		Deal_a_zhuangtai(x,y);
		Deal_a_zhuangtai(x,y+5);
		Deal_a_zhuangtai(x,y+10);
		Deal_a_zhuangtai(x+5,y+10);
		}
		break;
		
		case 9:
		{
		Deal_a_zhuangtai(x,y);
		Deal_a_zhuangtai(x,y+5);
		Deal_a_zhuangtai(x+5,y);
		Deal_a_zhuangtai(x+10,y);
		}
		break;
		
		case 10:
		{
		Deal_a_zhuangtai(x,y);
		Deal_a_zhuangtai(x+5,y);
		Deal_a_zhuangtai(x+5,y+5);
		Deal_a_zhuangtai(x+5,y+10);
		}
		break;
		
		case 11:
		{
		Deal_a_zhuangtai(x,y+5);
		Deal_a_zhuangtai(x+5,y+5);
		Deal_a_zhuangtai(x+5,y+5);
		Deal_a_zhuangtai(x+10,y);
		}
		break;
		
		case 12:
		{
		Deal_a_zhuangtai(x+5,y);
		Deal_a_zhuangtai(x+5,y+5);
		Deal_a_zhuangtai(x+5,y+10);
		Deal_a_zhuangtai(x,y+10);
		}
		break;
		
		case 13:
		{
		Deal_a_zhuangtai(x,y);
		Deal_a_zhuangtai(x+5,y);
		Deal_a_zhuangtai(x+5,y);
		Deal_a_zhuangtai(x+10,y+5);
		}
		break;
		
		case 14:
		{
		Deal_a_zhuangtai(x,y);
		Deal_a_zhuangtai(x+5,y);
		Deal_a_zhuangtai(x,y+5);
		Deal_a_zhuangtai(x,y+10);
		}
		break;
		
		case 15:
		{
		Deal_a_zhuangtai(x,y);
		Deal_a_zhuangtai(x,y+5);
		Deal_a_zhuangtai(x+5,y+5);
		Deal_a_zhuangtai(x+10,y+5);
		}
		break;
		
		case 16:
		{
		Deal_a_zhuangtai(x+5,y);
		Deal_a_zhuangtai(x,y+5);
		Deal_a_zhuangtai(x+5,y+5);
		Deal_a_zhuangtai(x,y+10);
		}
		break;
		
		case 17:
		{
		Deal_a_zhuangtai(x,y);
		Deal_a_zhuangtai(x+5,y);
		Deal_a_zhuangtai(x+5,y+5);
		Deal_a_zhuangtai(x+10,y+5);
		}
		break;
		
		case 18:
		{
		Deal_a_zhuangtai(x,y);
		Deal_a_zhuangtai(x,y+5);
		Deal_a_zhuangtai(x+5,y+5);
		Deal_a_zhuangtai(x+5,y+10);
		}
		break;
		
		case 19:
		{
		Deal_a_zhuangtai(x,y+5);
		Deal_a_zhuangtai(x+5,y+5);
		Deal_a_zhuangtai(x+5,y);
		Deal_a_zhuangtai(x+10,y);
		}
		break;
	}

}

/*************************************************
功能：向下移动状态
*************************************************/

void Down_zhuangtai_move(u16 x,u16 y,u16 what)
{
	Deal_zhuangtai_tuxing(x,y,what);
	Draw_zhuangtai_tuxing(x,y+5,what);
}

/*************************************************
功能：向左移动状态
*************************************************/
void Left_zhuangtai_move(u16 x,u16 y,u8 what)
{
	Deal_zhuangtai_tuxing(x,y,what);
	Draw_zhuangtai_tuxing(x-5,y,what);
}

/*************************************************
功能：向右移动状态
*************************************************/
void Right_zhuangtai_move(u16 x,u16 y,u8 what)
{
	Deal_zhuangtai_tuxing(x,y,what);
	Draw_zhuangtai_tuxing(x+5,y,what);
}









void Down(u16 x,u16 y,u8 what)
{
	Down_zhuangtai_move(x,y,what);
	Down_tuxing_move(x,y,what);			
}


void Left(u16 x,u16 y,u8 what)
{
	Left_zhuangtai_move(x,y,what);
	Left_tuxing_move(x,y,what);			
}


void Right(u16 x,u16 y,u8 what)
{
	Right_zhuangtai_move(x,y,what);
	Right_tuxing_move(x,y,what);			
}


void Deal(u16 x,u16 y,u8 what)
{
	Deal_tuxing1(x,y,what);
	Deal_zhuangtai_tuxing(x,y,what);			
}



void Draw(u16 x,u16 y,u8 what)
{
	Draw_tuxing1(x,y,what);
	Draw_zhuangtai_tuxing(x,y,what);			
}


void change()
{
	
	switch(what)
	{
		case 1:break;
		
		case 2:Deal(x,y,2);Draw(x,y,3);what=3;break;
		case 3:Deal(x,y,3);Draw(x,y,2);what=2;break;
		
		case 4:Deal(x,y,4);Draw(x,y,5);what=5;break;
		case 5:Deal(x,y,5);Draw(x,y,7);what=7;break;
		case 6:Deal(x,y,6);Draw(x,y,4);what=4;break;
		case 7:Deal(x,y,7);Draw(x,y,6);what=6;break;
		
		case 8:Deal(x,y,8);Draw(x,y,9);what=9;break;
		case 9:Deal(x,y,9);Draw(x,y,10);what=10;break;
		case 10:Deal(x,y,10);Draw(x,y,11);what=11;break;
		case 11:Deal(x,y,11);Draw(x,y,8);what=8;break;
		
		case 12:Deal(x,y,12);Draw(x,y,15);what=15;break;
		case 13:Deal(x,y,13);Draw(x,y,12);what=12;break;
		case 14:Deal(x,y,14);Draw(x,y,13);what=13;break;
		case 15:Deal(x,y,15);Draw(x,y,14);what=14;break;
		
		case 16:Deal(x,y,16);Draw(x,y,17);what=17;break;
		case 17:Deal(x,y,17);Draw(x,y,16);what=16;break;
		
		case 18:Deal(x,y,18);Draw(x,y,19);what=19;break;
		case 19:Deal(x,y,19);Draw(x,y,18);what=18;break;
	
	}

}


void change1()
{
	
	switch(what)
	{
		case 1:break;
		
		case 2:Deal_zhuangtai_tuxing(x,y,2);Draw_zhuangtai_tuxing(x,y,3);break;
		case 3:Deal_zhuangtai_tuxing(x,y,3);Draw_zhuangtai_tuxing(x,y,2);break;
		
		case 4:Deal_zhuangtai_tuxing(x,y,4);Draw_zhuangtai_tuxing(x,y,5);break;
		case 5:Deal_zhuangtai_tuxing(x,y,5);Draw_zhuangtai_tuxing(x,y,7);break;
		case 6:Deal_zhuangtai_tuxing(x,y,6);Draw_zhuangtai_tuxing(x,y,4);break;
		case 7:Deal_zhuangtai_tuxing(x,y,7);Draw_zhuangtai_tuxing(x,y,6);break;
		
		case 8:Deal_zhuangtai_tuxing(x,y,8);Draw_zhuangtai_tuxing(x,y,9);break;
		case 9:Deal_zhuangtai_tuxing(x,y,9);Draw_zhuangtai_tuxing(x,y,10);break;
		case 10:Deal_zhuangtai_tuxing(x,y,10);Draw_zhuangtai_tuxing(x,y,11);break;
		case 11:Deal_zhuangtai_tuxing(x,y,11);Draw_zhuangtai_tuxing(x,y,8);break;
			
		case 12:Deal_zhuangtai_tuxing(x,y,12);Draw_zhuangtai_tuxing(x,y,15);break;
		case 13:Deal_zhuangtai_tuxing(x,y,13);Draw_zhuangtai_tuxing(x,y,12);break;
		case 14:Deal_zhuangtai_tuxing(x,y,14);Draw_zhuangtai_tuxing(x,y,13);break;
		case 15:Deal_zhuangtai_tuxing(x,y,15);Draw_zhuangtai_tuxing(x,y,14);break;
		
		case 16:Deal_zhuangtai_tuxing(x,y,16);Draw_zhuangtai_tuxing(x,y,17);break;
		case 17:Deal_zhuangtai_tuxing(x,y,17);Draw_zhuangtai_tuxing(x,y,16);break;
		
		case 18:Deal_zhuangtai_tuxing(x,y,18);Draw_zhuangtai_tuxing(x,y,19);break;
		case 19:Deal_zhuangtai_tuxing(x,y,19);Draw_zhuangtai_tuxing(x,y,18);break;
	
	}



}


int panduan1(u16 x,u16 y,u8 what,u8 fangxiang)

{
	u16 sum1=0,sum2=0;
	u8 i,n;
	u8 sbuff[20][20];
	x=x/5+1;
	y=y/5;
  for(i=0;i<20;i++)
	{
	
		for(n=0;n<20;n++)
		{
			sbuff[i][n]=zhuangtai[i][n];
			sum1=sum1+zhuangtai[i][n];	
		}
	  
	}
			
	
	switch(fangxiang)
	{
		case 1:Left_zhuangtai_move((x-1)*5,5*y,what);break;
		case 2:Down_zhuangtai_move((x-1)*5,5*y,what);break;
		case 3:Right_zhuangtai_move((x-1)*5,5*y,what);break;
		case 4:change1();break;
		
	}
		for(i=0;i<20;i++)
	{
		
		for(n=0;n<20;n++)
		{
			sum2=sum2+zhuangtai[i][n];	
			zhuangtai[i][n]=sbuff[i][n];			
    }
	}
	
		
		return !(sum1==sum2);
}



void lie_move(u16 y)
{
	u8 i;
	y=y/5;
	for(i=1;i<19;i++)
	{
		if(zhuangtai[y][i]==1)
		{
			zhuangtai[y][i]=zhuangtai[y+1][i];
			zhuangtai[y+1][i]=1;
			
				Deal_realbox1((i-1)*5,y*5);
			Draw_realbox1((i-1)*5,(y+1)*5);
		}
		else if(zhuangtai[y][i]==0)
		{
			zhuangtai[y][i]=zhuangtai[y+1][i];
			zhuangtai[y+1][i]=0;
			
				Deal_realbox1((i-1)*5,y*5);
			Deal_realbox1((i-1)*5,(y+1)*5);
		}
	}
}


void Deal_lie(u16 y)
{
	u8 i;
	y=y/5;
	for(i=1;i<19;i++)
	{
		zhuangtai[y][i]=0;
		Deal_realbox1((i-1)*5,y*5);
	}
}


void xiaochu()
{
	u8 n;
	for(n=17;n>0;n--)
	{
		if(n>=17)
		{
			n=17;
		
		
		}
		if(
					
					(
                    zhuangtai[n+1][1]&&zhuangtai[n+1][2]&&zhuangtai[n+1][3]&&zhuangtai[n+1][4]&&zhuangtai[n+1][5]&&zhuangtai[n+1][6]&&zhuangtai[n+1][7]&&zhuangtai[n+1][8]&&zhuangtai[n+1][9]&&zhuangtai[n+1][10]&&zhuangtai[n+1][11]&&zhuangtai[n+1][12]&&zhuangtai[n+1][13]&&zhuangtai[n+1][14]&&zhuangtai[n+1][15]&&zhuangtai[n+1][16]&&zhuangtai[n+1][17]&&zhuangtai[n+1][18]
					) 
				 &&
					!(
					zhuangtai[n][1]&&zhuangtai[n][2]&&zhuangtai[n][3]&&zhuangtai[n][4]&&zhuangtai[n][5]&&zhuangtai[n][6]&&zhuangtai[n][7]&&zhuangtai[n][8]&&zhuangtai[n][9]&&zhuangtai[n][10]&&zhuangtai[n][11]&&zhuangtai[n][12]&&zhuangtai[n][13]&&zhuangtai[n][14]&&zhuangtai[n][15]&&zhuangtai[n][16]&&zhuangtai[n][17]&&zhuangtai[n][18]
					) 


		   )
		  
		

		{
			lie_move(5*n);

			n=n+2;
		}
		
		if(
					(
					!zhuangtai[n][1]&&!zhuangtai[n][2]&&!zhuangtai[n][3]&&!zhuangtai[n][4]&&!zhuangtai[n][5]&&!zhuangtai[n][6]&&!zhuangtai[n][7]&&!zhuangtai[n][8]&&!zhuangtai[n][9]&&!zhuangtai[n][10]&&!zhuangtai[n][11]&&!zhuangtai[n][12]&&!zhuangtai[n][13]&&!zhuangtai[n][14]&&!zhuangtai[n][15]&&!zhuangtai[n][16]&&!zhuangtai[n][17]&&!zhuangtai[n][18]
					)
		  )
		{
			for(n=0;n<19;n++)
	{
		if(
				(
				zhuangtai[n][1]&&zhuangtai[n][2]&&zhuangtai[n][3]&&zhuangtai[n][4]&&zhuangtai[n][5]&&zhuangtai[n][6]&&zhuangtai[n][7]&&zhuangtai[n][8]&&zhuangtai[n][9]&&zhuangtai[n][10]&&zhuangtai[n][11]&&zhuangtai[n][12]&&zhuangtai[n][13]&&zhuangtai[n][14]&&zhuangtai[n][15]&&zhuangtai[n][16]&&zhuangtai[n][17]&&zhuangtai[n][18]
					)
				)
		  
		{
			Deal_lie(n*5);fengshu++;
				if(fengshu%10==0)
				{
					speed=speed+10;
					leave++;				
				}
		}	
	}
	break;		
		}
	}
}
/********************************
说明：该函数用于游戏界面显示
******************************/
void boxshow(void)
{
  
	 LCD_Clear(WHITE);
	for(i=0;i<=95;i=i+5) 
	{
		Draw_realbox1(0,i);
	}
	for(i=0;i<=95;i=i+5) 
	{
		Draw_realbox1(95,i);
	}
	for(i=0;i<=95;i=i+5) 
	{
		Draw_realbox1(i,95);
	}

	 Show_Str(0, 101, BLACK,WHITE,"SCORE:",16,1);
     LCD_ShowNum(90,101,0,1,16);
  
}

/*********************************
说明：该函数用于游戏结束
以及结束显示
*********************************/
 void boxgameover()
{
	
	LCD_Clear(WHITE);
	Show_Str(0, 0, BLACK,WHITE,"game over",16,1);
	delay_ms(1000);
	LCD_Clear(WHITE);
	Show_Str(0, 32, BLACK,WHITE,"SCORE:",16,1);
	LCD_ShowNum(90,32,fengshu,1,16);
	while(1);
}



void begin()
{
	

	
	what=suijishu[4];
	suijishu[4]=suijishu[3];
	suijishu[3]=suijishu[2];
	suijishu[2]=suijishu[1];
	suijishu[1]=suijishu[0];
	srand(RAND*TIM_GetCounter(TIM3)*TIM_GetCounter(TIM3));
	RAND++;
	suijishu[0]=rand()%19+1;


	x=60,y=0;
	
	Draw(60,0,what);	
	if(panduan1(x,y,what,2))
	{
		boxgameover();
	}
	
}





void boxtouch(void)
{	u8 key;
	key= PS2_Scan();	
	switch(key)
	{
	case 0:if(!panduan1(x,y,what,2)){Down(x,y,what);y=y+5;}else{	xiaochu();begin();} break;
	case 2:if(!panduan1(x,y,what,1)){Left(x,y,what);x=x-5;}break;
	case 1:if(!panduan1(x,y,what,3)){Right(x,y,what);x=x+5;}break;
	case 4:if(!panduan1(x,y,what,4))change();break;
	}

}


void TIM3_Init(u16 per,u16 psc)
{
    TIM_TimeBaseInitTypeDef  TIM_TimeBaseInitStructure;
	NVIC_InitTypeDef NVIC_InitStructure;

	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3, ENABLE); //时钟使能
	
	//定时器TIM3初始化
	TIM_TimeBaseInitStructure.TIM_Period=per;   //自动装载值
	TIM_TimeBaseInitStructure.TIM_Prescaler=psc; //分频系数
	TIM_TimeBaseInitStructure.TIM_ClockDivision=TIM_CKD_DIV1;
	TIM_TimeBaseInitStructure.TIM_CounterMode=TIM_CounterMode_Up; //设置向上计数模式
	TIM_TimeBaseInit(TIM3,&TIM_TimeBaseInitStructure);
	
	TIM_ITConfig(TIM3,TIM_IT_Update,ENABLE ); //使能指定的TIM3中断,允许更新中断

	//中断优先级NVIC设置
	NVIC_InitStructure.NVIC_IRQChannel = TIM3_IRQn;  //TIM3中断
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;  //先占优先级0级
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 3;  //从优先级3级
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE; //IRQ通道被使能
	NVIC_Init(&NVIC_InitStructure);  //初始化NVIC寄存器
	TIM_Cmd(TIM3, ENABLE);  //使能TIMx					 
}


void TIM3_IRQHandler(void)
{
	if(TIM_GetITStatus(TIM3,TIM_IT_Update)!= RESET)
	{   
		delay_ms(1000/speed);
		boxtouch();
		TIM_ClearITPendingBit(TIM3,TIM_IT_Update);	
	}
}  








void BOX_TASK(void)
{
   Adc_Init();		  		//ADC初始化
   LCD_Clear(WHITE); 
   NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);  //中断优先级分组 分2组
   boxshow();
   begin();
   TIM3_Init(500,7199);//启动定时器
  

}






