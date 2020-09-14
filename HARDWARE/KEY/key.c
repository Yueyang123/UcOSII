#include "stm32f10x.h"
#include "key.h"
#include "sys.h" 
#include "delay.h"
#include  "usart.h"

 


								    
typedef struct 
{
        GPIO_TypeDef* GPIOX;
        uint16_t GPIO_Pin;
}KGPT[2][4]; //4*4
KGPT KPIN={     
                      {{GPIOC,GPIO_Pin_15} ,{GPIOA,GPIO_Pin_1}, {GPIOC,GPIO_Pin_14},{GPIOC,GPIO_Pin_13}},//row 行
                       {{GPIOA,GPIO_Pin_4},{GPIOA,GPIO_Pin_5}, {GPIOA,GPIO_Pin_6},{GPIOA,GPIO_Pin_7}}  //col 列
                };
#define row 0
#define col 1                                        
#define RCC_APB2_GPIOX  RCC_APB2Periph_GPIOA                                      
#define MAX_Time   36000000 // 松手检测最大延时 
				
	



//按键初始化函数 
void KEY_Init(void)
{
  u8 i;
        GPIO_InitTypeDef GPIO_InitStructure;
  RCC_APB2PeriphClockCmd(RCC_APB2_GPIOX,ENABLE);//使能PORTC时钟
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC ,ENABLE);//使能PORTC时钟
  for(i=0;i<4;i++)
        
        {
         GPIO_InitStructure.GPIO_Pin = KPIN[row][i].GPIO_Pin;
         GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; //设置成推挽输出
         GPIO_Init(KPIN[row][i].GPIOX, &GPIO_InitStructure);//初始化row行
         GPIO_ResetBits(KPIN[row][i].GPIOX,KPIN[row][i].GPIO_Pin);
        }
for(i=0;i<4;i++)
        {
                 GPIO_InitStructure.GPIO_Pin  = KPIN[col][i].GPIO_Pin;//PC5
                 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; //设置成上拉输入
                 GPIO_Init(KPIN[col][i].GPIOX, &GPIO_InitStructure);//初始化col列
        }
} 

u8 ReScan(GPIO_TypeDef* GPIOX,uint16_t colPin,u8 colIndex)
{
u8 i;
delay_ms(10);//消抖延时
for(i = 0;i<4;i++){
  GPIO_SetBits(KPIN[row][i].GPIOX,KPIN[row][i].GPIO_Pin);//每个行置1
  if((GPIO_ReadInputDataBit(GPIOX, colPin) == 1)) //如果列也变了 行的值就知道了 为 i
                {
                        GPIO_ResetBits(KPIN[row][i].GPIOX,KPIN[row][i].GPIO_Pin); //行恢复 置0 
                  return colIndex+i*4+1;//返回的数据 为1-16 对应4x4键盘的16个键
                }
        GPIO_ResetBits(KPIN[row][i].GPIOX,KPIN[row][i].GPIO_Pin);     //行恢复 置0
}
return 0;
}
u8 KEY_Scan(void)
{         
u8 i,keyvalue=0;
u32 j=0;
      while(keyvalue==0)
        {
	for(i = 0;i<4;i++)
        {
         if(GPIO_ReadInputDataBit(KPIN[col][i].GPIOX,KPIN[col][i].GPIO_Pin) == 0)//检测列 列值为 i
         {
                keyvalue = ReScan(KPIN[col][i].GPIOX,KPIN[col][i].GPIO_Pin,i);//检测行 取键值
//                while(GPIO_ReadInputDataBit(KPIN[col][i].GPIOX,KPIN[col][i].GPIO_Pin) == 0);//松手检测
               while((GPIO_ReadInputDataBit(KPIN[col][i].GPIOX,KPIN[col][i].GPIO_Pin) == 0)&&(j<MAX_Time))j++;//松手检测 带延时检测的
                return keyvalue;//返回键值
        }
      
	}

       }
}


void key_print(void)
{
	
	int num;
	  num = KEY_Scan();
switch(num)
	  { 
        case 0:  break;					  				      
				case 1: printf("1\n"); break;					  				       
				case 2: printf("2\n"); break;					  				     
				case 3: printf("3\n"); break;					  				     
				case 4: printf("4\n"); break;				 	       
				case 5: printf("5\n"); break;					  				      
				case 6: printf("6\n"); break;					  				      
				case 7: printf("7\n"); break;					 			       
				case 8: printf("8\n"); break;								 		       
				case 9: printf("9\n"); break;							 				     	
			    case 10: printf("10\n"); break;						 				      		
				case 11: printf("11\n"); break;					 				      
				case 12: printf("12\n"); break;							 				      	
			    case 13: printf("13\n"); break;							 				       	
				case 14: printf("14\n"); break;					 				      
				case 15: printf("15\n"); break;	
			  

	  }

  }