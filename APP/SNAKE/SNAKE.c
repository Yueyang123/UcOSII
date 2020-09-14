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
#define SNAKE_Max_Long 50//�ߵ���󳤶� 
u8 pause=0;
u8 start=0;
u8 key=0;

//static Rand=1;

//void TIM3_Init(u16 per,u16 psc)
//{
//    TIM_TimeBaseInitTypeDef  TIM_TimeBaseInitStructure;
//	NVIC_InitTypeDef NVIC_InitStructure;

//	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3, ENABLE); //ʱ��ʹ��
//	
//	//��ʱ��TIM3��ʼ��
//	TIM_TimeBaseInitStructure.TIM_Period=per;   //�Զ�װ��ֵ
//	TIM_TimeBaseInitStructure.TIM_Prescaler=psc; //��Ƶϵ��
//	TIM_TimeBaseInitStructure.TIM_ClockDivision=TIM_CKD_DIV1;
//	TIM_TimeBaseInitStructure.TIM_CounterMode=TIM_CounterMode_Up; //�������ϼ���ģʽ
//	TIM_TimeBaseInit(TIM3,&TIM_TimeBaseInitStructure);
//	
//	TIM_ITConfig(TIM3,TIM_IT_Update,ENABLE ); //ʹ��ָ����TIM3�ж�,��������ж�

//	//�ж����ȼ�NVIC����
//	NVIC_InitStructure.NVIC_IRQChannel = TIM3_IRQn;  //TIM3�ж�
//	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;  //��ռ���ȼ�0��
//	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 3;  //�����ȼ�3��
//	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE; //IRQͨ����ʹ��
//	NVIC_Init(&NVIC_InitStructure);  //��ʼ��NVIC�Ĵ���
//	TIM_Cmd(TIM3, ENABLE);  //ʹ��TIMx					 
//}





////�߽ṹ��
//struct Snake
//{
//	s16 X[SNAKE_Max_Long];
//	s16 Y[SNAKE_Max_Long];
//	u8 Long;//�ߵĳ���
//	u8 Life;//�ߵ����� 0���� 1����
//	u8 Direction;//���ƶ��ķ���
//}snake;

////ʳ��ṹ��
//struct Food
//{
//	u8 X;//ʳ�������
//	u8 Y;//ʳ��������
//	u8 Yes;//�ж��Ƿ�Ҫ����ʳ��ı��� 0��ʳ�� 1��Ҫ����ʳ��
//}food;


////��Ϸ�ȼ�����
//struct Game
//{
//	u16 Score;//����
//	u8 Life;//��Ϸ�ȼ�	
//}game;


//void touch(void)
//{	
//	key= PS2_Scan();	
//	
//	if(key==KEY_UP&&snake.Direction!=4)		//��
//	{
//		snake.Direction=3;
//	} 
//	if(key==KEY_DOWN&&snake.Direction!=3)	   //��
//	{
//		snake.Direction=4;
//	} 
//	if(key==KEY_LEFT&&snake.Direction!=1)	   //��
//	{
//		snake.Direction=2;
//	} 
//	if(key==KEY_RIGHT&&snake.Direction!=2)	  //��
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
////������ʾ
//void show(void)
// {   
//	 LCD_Clear(WHITE);
//     LCD_DrawRectangle(0, 0, 101,101);
//	 Show_Str(0, 101, BLACK,WHITE,"SCORE:",16,1);
//     LCD_ShowNum(90,101,0,1,16);
// }  

// void gameover()
//{
//	start=0;//ֹͣ��Ϸ
//	LCD_Clear(WHITE);
//	Show_Str(0, 0, BLACK,WHITE,"game over",16,1);
//}
// 
// 
// 
//void play()
//{
//   u16 i,n,RAND=1;//i�ߵĹؽ��� n�����ж�ʳ����ߵ������Ƿ��غ�
//	u8 life_buf[2];
//	u8 socre_buf[4];
//	snake.Long=2;//�����ߵĳ���
//	snake.Life=0;//�߻�����
//	snake.Direction=1;//�ߵ���ʼ������Ϊ��
//	game.Score=0;//����Ϊ0
//	game.Life=4;//�ߵ�����ֵ
//	food.Yes=1;//������ʳ��
//	snake.X[0]=15;snake.Y[0]=15;
//	snake.X[1]=15;snake.Y[1]=15;

//	while(1)
//	{
//		
//			if(food.Yes==1)//�����µ�ʳ��
//			{
//				while(1)
//				   {
//						//���趨����������ʾʳ��		
//						//food.X=12+rand()%(240/12)*12;
//						//food.Y=12+rand()%(160/12)*12;
//					srand(RAND*TIM_GetCounter(TIM3)*TIM_GetCounter(TIM3));//���������� ���õ�RTCʱ��		
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
//				if(food.Yes==0)//��ʳ���Ҫ��ʾ
//				{	
//					LCD_Fill(food.X,food.Y,food.X+5,food.Y+5,RED);
//				}
//				//ȡ����Ҫ���»����ߵĽ���
//				for(i=snake.Long-1;i>0;i--)
//				{
//					snake.X[i]=snake.X[i-1];
//					snake.Y[i]=snake.Y[i-1];
//				}
//				//ͨ�������������ߵ��˶�����
//				switch(snake.Direction)
//				{
//					case 1:snake.X[0]+=5;break;//�����˶�
//					case 2:snake.X[0]-=5;break;//�����˶�
//					case 3:snake.Y[0]-=5;break;//�����˶�
//					case 4:snake.Y[0]+=5;break;//�����˶�
//				}
//				for(i=0;i<snake.Long;i++)//������	
//				LCD_Fill(snake.X[i],snake.Y[i],snake.X[i]+5,snake.Y[i]+5,BLUE);//��������
//				while(pause==1){};
//				delay_ms(500);//��ʱ
//				LCD_Fill(snake.X[snake.Long-1],snake.Y[snake.Long-1],snake.X[snake.Long-1]+5,snake.Y[snake.Long-1]+5,WHITE);//��������		
//						
//					
//				//�ж��Ƿ�ײǽ
//				if(snake.X[0]<0||snake.X[0]>100||snake.Y[0]<0||snake.Y[0]>100)
//					snake.Life=1;//��������
//		
//				//���ߵ����峬��3�ں��ж����������ײ
//				for(i=3;i<snake.Long;i++)
//				{
//					if(snake.X[i]==snake.X[0]&&snake.Y[i]==snake.Y[0])//�������һ����ֵ����ͷ������Ⱦ���Ϊ��������ײ
//						game.Life-=1;
//				}
//				if(snake.Life==1||game.Life==0)//���������ж��Ժ������������������ѭ�������¿�ʼ
//				{
//					gameover();
//					break;
//				}	
//				//�ж����Ƿ�Ե���ʳ��
//				if(snake.X[0]==food.X&&snake.Y[0]==food.Y)
//				{
//					LCD_Fill(food.X,food.Y,food.X+5,food.Y+5,GRAY);//�ѳԵ���ʳ������
//					if(!((snake.Long==SNAKE_Max_Long)&&(snake.Long==SNAKE_Max_Long)))
//					snake.Long++;//�ߵ����峤һ��
//					game.Score+=10;
//					socre_buf[0]=game.Score/100+0x30;
//					socre_buf[1]=game.Score%100/10+0x30;
//					socre_buf[2]=game.Score%100%10+0x30;
//					socre_buf[3]='\0';
//					
//					LCD_Fill(90,100,106,116,WHITE);
//					Show_Str(90, 100, BLACK,WHITE,socre_buf,16,1);
//					food.Yes=1;//��Ҫ������ʾʳ��
//				}
//		delay_ms(300);
//	}	
//}
//	
//	


//void SNAKE_TASK()
//{  
//   Adc_Init();		  		//ADC��ʼ��
//   LCD_Clear(WHITE); 
//   NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);  //�ж����ȼ����� ��2��
//   TIM3_Init(50,7199);//������ʱ��
//   show();

//   play();




//}



