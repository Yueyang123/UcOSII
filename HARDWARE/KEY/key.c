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
                      {{GPIOC,GPIO_Pin_15} ,{GPIOA,GPIO_Pin_1}, {GPIOC,GPIO_Pin_14},{GPIOC,GPIO_Pin_13}},//row ��
                       {{GPIOA,GPIO_Pin_4},{GPIOA,GPIO_Pin_5}, {GPIOA,GPIO_Pin_6},{GPIOA,GPIO_Pin_7}}  //col ��
                };
#define row 0
#define col 1                                        
#define RCC_APB2_GPIOX  RCC_APB2Periph_GPIOA                                      
#define MAX_Time   36000000 // ���ּ�������ʱ 
				
	



//������ʼ������ 
void KEY_Init(void)
{
  u8 i;
        GPIO_InitTypeDef GPIO_InitStructure;
  RCC_APB2PeriphClockCmd(RCC_APB2_GPIOX,ENABLE);//ʹ��PORTCʱ��
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC ,ENABLE);//ʹ��PORTCʱ��
  for(i=0;i<4;i++)
        
        {
         GPIO_InitStructure.GPIO_Pin = KPIN[row][i].GPIO_Pin;
         GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; //���ó��������
         GPIO_Init(KPIN[row][i].GPIOX, &GPIO_InitStructure);//��ʼ��row��
         GPIO_ResetBits(KPIN[row][i].GPIOX,KPIN[row][i].GPIO_Pin);
        }
for(i=0;i<4;i++)
        {
                 GPIO_InitStructure.GPIO_Pin  = KPIN[col][i].GPIO_Pin;//PC5
                 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; //���ó���������
                 GPIO_Init(KPIN[col][i].GPIOX, &GPIO_InitStructure);//��ʼ��col��
        }
} 

u8 ReScan(GPIO_TypeDef* GPIOX,uint16_t colPin,u8 colIndex)
{
u8 i;
delay_ms(10);//������ʱ
for(i = 0;i<4;i++){
  GPIO_SetBits(KPIN[row][i].GPIOX,KPIN[row][i].GPIO_Pin);//ÿ������1
  if((GPIO_ReadInputDataBit(GPIOX, colPin) == 1)) //�����Ҳ���� �е�ֵ��֪���� Ϊ i
                {
                        GPIO_ResetBits(KPIN[row][i].GPIOX,KPIN[row][i].GPIO_Pin); //�лָ� ��0 
                  return colIndex+i*4+1;//���ص����� Ϊ1-16 ��Ӧ4x4���̵�16����
                }
        GPIO_ResetBits(KPIN[row][i].GPIOX,KPIN[row][i].GPIO_Pin);     //�лָ� ��0
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
         if(GPIO_ReadInputDataBit(KPIN[col][i].GPIOX,KPIN[col][i].GPIO_Pin) == 0)//����� ��ֵΪ i
         {
                keyvalue = ReScan(KPIN[col][i].GPIOX,KPIN[col][i].GPIO_Pin,i);//����� ȡ��ֵ
//                while(GPIO_ReadInputDataBit(KPIN[col][i].GPIOX,KPIN[col][i].GPIO_Pin) == 0);//���ּ��
               while((GPIO_ReadInputDataBit(KPIN[col][i].GPIOX,KPIN[col][i].GPIO_Pin) == 0)&&(j<MAX_Time))j++;//���ּ�� ����ʱ����
                return keyvalue;//���ؼ�ֵ
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