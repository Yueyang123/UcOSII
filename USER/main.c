#include "delay.h"
#include "sys.h"
#include "usart.h"
#include "lcd.h"
#include "led.h"
#include "gui.h"
#include "Picture.h"
#include "24cxx.h"
#include "includes.h"

//START ����
//�����������ȼ�
#define START_TASK_PRIO			10  ///��ʼ��������ȼ�Ϊ���
//���������ջ��С
#define START_STK_SIZE			128
//���������ջ
OS_STK START_TASK_STK[START_STK_SIZE];
//������
void start_task(void *pdata);

//LED0����
//�����������ȼ�
#define LED0_TASK_PRIO			7
//���������ջ��С
#define LED0_STK_SIZE			64
//�����ջ
OS_STK LED0_TASK_STK[LED0_STK_SIZE];
//������
void led0_task(void *pdata);

//��ӡ����
//�����������ȼ�
#define PRINT_TASK_PRIO			6
//���������ջ��С
#define PRINT_STK_SIZE			64
//�����ջ
OS_STK PRINT_TASK_STK[PRINT_STK_SIZE];
//������
void print_task(void *pdata);


int main(void)
{
    uart_init(9600);
    delay_init();//Delay init.
	  LCD_Init();	   //Һ������ʼ��
	  LED_Init();
    LCD_Clear(BLACK); //�����͹���
	
		OSInit();
		OSTaskCreate(start_task,(void*)0,(OS_STK*)&START_TASK_STK[START_STK_SIZE-1],START_TASK_PRIO); //������ʼ����
		OSStart();
	

	
// /**************************************************************************
//	���ܣ���ʼ�����棬����һ���Զ�����
//	���ߣ���Խ
//    ʱ�䣺2019/5/14
//	***************************************************************/	
//	
//		while(1)
//	{	
//		LED0=!LED0;
//		printf("Hello World");
//		delay_ms(100);
//					
//	}	
	
}


//��ʼ����
void start_task(void *pdata)
{
	OS_CPU_SR cpu_sr=0;
	pdata=pdata;
	OSStatInit();  //����ͳ������
	
	OS_ENTER_CRITICAL();  //�����ٽ���(�ر��ж�)
	OSTaskCreate(led0_task,(void*)0,(OS_STK*)&LED0_TASK_STK[LED0_STK_SIZE-1],LED0_TASK_PRIO);//����LED0����
	OSTaskCreate(print_task,(void*)0,(OS_STK*)&PRINT_TASK_STK[PRINT_STK_SIZE-1],PRINT_TASK_PRIO);//����LED1����
	OSTaskSuspend(START_TASK_PRIO);//����ʼ����
	OS_EXIT_CRITICAL();  //�˳��ٽ���(���ж�)
}

//LED0����
void led0_task(void *pdata)
{
	while(1)
	{
		LED0=0; 
		delay_ms(80);
		LED0=1;
		delay_ms(100);
	}
}

void print_task(void *pdata)
{
	while(1)
	{
			printf("Hello World");
			delay_ms(100);
	}
}