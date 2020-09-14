#include "sys.h"
#include "SNAKE.h"
#include "gui.h"
#include "lcd.h"
#include "stdlib.h"
#include "key.h"
#include "adc.h"

#define KEY_UP    3
#define KEY_DOWN  4
#define KEY_LEFT  2
#define KEY_RIGHT 1  
#define SNAKE_Max_Long 50//蛇的最大长度 
u8 pause=0;
u8 start=0;
u8 key=0;

//static Rand=1;

//void TIM3_Init(u16 per,u16 psc)
//{
//    TIM_TimeBaseInitTypeDef  TIM_TimeBaseInitStructure;
//	NVIC_InitTypeDef NVIC_InitStructure;

//	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3, ENABLE); //时钟使能
//	
//	//定时器TIM3初始化
//	TIM_TimeBaseInitStructure.TIM_Period=per;   //自动装载值
//	TIM_TimeBaseInitStructure.TIM_Prescaler=psc; //分频系数
//	TIM_TimeBaseInitStructure.TIM_ClockDivision=TIM_CKD_DIV1;
//	TIM_TimeBaseInitStructure.TIM_CounterMode=TIM_CounterMode_Up; //设置向上计数模式
//	TIM_TimeBaseInit(TIM3,&TIM_TimeBaseInitStructure);
//	
//	TIM_ITConfig(TIM3,TIM_IT_Update,ENABLE ); //使能指定的TIM3中断,允许更新中断

//	//中断优先级NVIC设置
//	NVIC_InitStructure.NVIC_IRQChannel = TIM3_IRQn;  //TIM3中断
//	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;  //先占优先级0级
//	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 3;  //从优先级3级
//	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE; //IRQ通道被使能
//	NVIC_Init(&NVIC_InitStructure);  //初始化NVIC寄存器
//	TIM_Cmd(TIM3, ENABLE);  //使能TIMx					 
//}





////蛇结构体
//struct Snake
//{
//	s16 X[SNAKE_Max_Long];
//	s16 Y[SNAKE_Max_Long];
//	u8 Long;//蛇的长度
//	u8 Life;//蛇的生命 0活着 1死亡
//	u8 Direction;//蛇移动的方向
//}snake;

////食物结构体
//struct Food
//{
//	u8 X;//食物横坐标
//	u8 Y;//食物纵坐标
//	u8 Yes;//判断是否要出现食物的变量 0有食物 1需要出现食物
//}food;


////游戏等级分数
//struct Game
//{
//	u16 Score;//分数
//	u8 Life;//游戏等级	
//}game;


//void touch(void)
//{	
//	key= PS2_Scan();	
//	
//	if(key==KEY_UP&&snake.Direction!=4)		//上
//	{
//		snake.Direction=3;
//	} 
//	if(key==KEY_DOWN&&snake.Direction!=3)	   //下
//	{
//		snake.Direction=4;
//	} 
//	if(key==KEY_LEFT&&snake.Direction!=1)	   //左
//	{
//		snake.Direction=2;
//	} 
//	if(key==KEY_RIGHT&&snake.Direction!=2)	  //右
//	{
//		snake.Direction=1;
//	}
//}


//void TIM3_IRQHandler(void)
//{
//	if(TIM_GetITStatus(TIM3,TIM_IT_Update)!= RESET)
//	{
//		touch();
//		TIM_ClearITPendingBit(TIM3,TIM_IT_Update);	
//	}
//}  



// 
////界面显示
//void show(void)
// {   
//	 LCD_Clear(WHITE);
//     LCD_DrawRectangle(0, 0, 101,101);
//	 Show_Str(0, 101, BLACK,WHITE,"SCORE:",16,1);
//     LCD_ShowNum(90,101,0,1,16);
// }  

// void gameover()
//{
//	start=0;//停止游戏
//	LCD_Clear(WHITE);
//	Show_Str(0, 0, BLACK,WHITE,"game over",16,1);
//}
// 
// 
// 
//void play()
//{
//   u16 i,n,RAND=1;//i蛇的关节数 n用来判断食物和蛇的身体是否重合
//	u8 life_buf[2];
//	u8 socre_buf[4];
//	snake.Long=2;//定义蛇的长度
//	snake.Life=0;//蛇还活着
//	snake.Direction=1;//蛇的起始方向定义为右
//	game.Score=0;//分数为0
//	game.Life=4;//蛇的生命值
//	food.Yes=1;//出现新食物
//	snake.X[0]=15;snake.Y[0]=15;
//	snake.X[1]=15;snake.Y[1]=15;

//	while(1)
//	{
//		
//			if(food.Yes==1)//出现新的食物
//			{
//				while(1)
//				   {
//						//在设定的区域内显示食物		
//						//food.X=12+rand()%(240/12)*12;
//						//food.Y=12+rand()%(160/12)*12;
//					srand(RAND*TIM_GetCounter(TIM3)*TIM_GetCounter(TIM3));//添加随机种子 采用的RTC时钟		
//					     RAND++;
//						food.X=5+rand()%10*10;
//						food.Y=30+rand()%5*10;
//						for(n=0;n<snake.Long;n++)
//						{
//							if(food.X==snake.X[n]&&food.Y==snake.Y[n])
//								break;
//						}
//						if(n==snake.Long)
//						food.Yes=0;	
//						break;
//					}
//			}
//				
//				if(food.Yes==0)//有食物就要显示
//				{	
//					LCD_Fill(food.X,food.Y,food.X+5,food.Y+5,RED);
//				}
//				//取得需要重新画的蛇的节数
//				for(i=snake.Long-1;i>0;i--)
//				{
//					snake.X[i]=snake.X[i-1];
//					snake.Y[i]=snake.Y[i-1];
//				}
//				//通过按键来设置蛇的运动方向
//				switch(snake.Direction)
//				{
//					case 1:snake.X[0]+=5;break;//向右运动
//					case 2:snake.X[0]-=5;break;//向左运动
//					case 3:snake.Y[0]-=5;break;//向上运动
//					case 4:snake.Y[0]+=5;break;//向下运动
//				}
//				for(i=0;i<snake.Long;i++)//画出蛇	
//				LCD_Fill(snake.X[i],snake.Y[i],snake.X[i]+5,snake.Y[i]+5,BLUE);//画蛇身体
//				while(pause==1){};
//				delay_ms(500);//延时
//				LCD_Fill(snake.X[snake.Long-1],snake.Y[snake.Long-1],snake.X[snake.Long-1]+5,snake.Y[snake.Long-1]+5,WHITE);//消除蛇身		
//						
//					
//				//判断是否撞墙
//				if(snake.X[0]<0||snake.X[0]>100||snake.Y[0]<0||snake.Y[0]>100)
//					snake.Life=1;//蛇死掉了
//		
//				//当蛇的身体超过3节后判断蛇自身的碰撞
//				for(i=3;i<snake.Long;i++)
//				{
//					if(snake.X[i]==snake.X[0]&&snake.Y[i]==snake.Y[0])//自身的任一坐标值与蛇头坐标相等就认为是自身碰撞
//						game.Life-=1;
//				}
//				if(snake.Life==1||game.Life==0)//以上两种判断以后如果蛇死掉了跳出内循环，重新开始
//				{
//					gameover();
//					break;
//				}	
//				//判断蛇是否吃到了食物
//				if(snake.X[0]==food.X&&snake.Y[0]==food.Y)
//				{
//					LCD_Fill(food.X,food.Y,food.X+5,food.Y+5,GRAY);//把吃到的食物消除
//					if(!((snake.Long==SNAKE_Max_Long)&&(snake.Long==SNAKE_Max_Long)))
//					snake.Long++;//蛇的身体长一节
//					game.Score+=10;
//					socre_buf[0]=game.Score/100+0x30;
//					socre_buf[1]=game.Score%100/10+0x30;
//					socre_buf[2]=game.Score%100%10+0x30;
//					socre_buf[3]='\0';
//					
//					LCD_Fill(90,100,106,116,WHITE);
//					Show_Str(90, 100, BLACK,WHITE,socre_buf,16,1);
//					food.Yes=1;//需要重新显示食物
//				}
//		delay_ms(300);
//	}	
//}
//	
//	


//void SNAKE_TASK()
//{  
//   Adc_Init();		  		//ADC初始化
//   LCD_Clear(WHITE); 
//   NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);  //中断优先级分组 分2组
//   TIM3_Init(50,7199);//启动定时器
//   show();

//   play();




//}



