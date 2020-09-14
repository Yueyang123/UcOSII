#include "delay.h"
#include "sys.h"
#include "usart.h"
#include "lcd.h"
#include "led.h"
#include "gui.h"
#include "Picture.h"
#include "24cxx.h"
#include "includes.h"

//START 任务
//设置任务优先级
#define START_TASK_PRIO			10  ///开始任务的优先级为最低
//设置任务堆栈大小
#define START_STK_SIZE			128
//任务任务堆栈
OS_STK START_TASK_STK[START_STK_SIZE];
//任务函数
void start_task(void *pdata);

//LED0任务
//设置任务优先级
#define LED0_TASK_PRIO			7
//设置任务堆栈大小
#define LED0_STK_SIZE			64
//任务堆栈
OS_STK LED0_TASK_STK[LED0_STK_SIZE];
//任务函数
void led0_task(void *pdata);

//打印任务
//设置任务优先级
#define PRINT_TASK_PRIO			6
//设置任务堆栈大小
#define PRINT_STK_SIZE			64
//任务堆栈
OS_STK PRINT_TASK_STK[PRINT_STK_SIZE];
//任务函数
void print_task(void *pdata);


int main(void)
{
    uart_init(9600);
    delay_init();//Delay init.
	  LCD_Init();	   //液晶屏初始化
	  LED_Init();
    LCD_Clear(BLACK); //清屏低功耗
	
		OSInit();
		OSTaskCreate(start_task,(void*)0,(OS_STK*)&START_TASK_STK[START_STK_SIZE-1],START_TASK_PRIO); //创建开始任务
		OSStart();
	

	
// /**************************************************************************
//	功能：初始化界面，按下一键自动进入
//	作者：杨越
//    时间：2019/5/14
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


//开始任务
void start_task(void *pdata)
{
	OS_CPU_SR cpu_sr=0;
	pdata=pdata;
	OSStatInit();  //开启统计任务
	
	OS_ENTER_CRITICAL();  //进入临界区(关闭中断)
	OSTaskCreate(led0_task,(void*)0,(OS_STK*)&LED0_TASK_STK[LED0_STK_SIZE-1],LED0_TASK_PRIO);//创建LED0任务
	OSTaskCreate(print_task,(void*)0,(OS_STK*)&PRINT_TASK_STK[PRINT_STK_SIZE-1],PRINT_TASK_PRIO);//创建LED1任务
	OSTaskSuspend(START_TASK_PRIO);//挂起开始任务
	OS_EXIT_CRITICAL();  //退出临界区(开中断)
}

//LED0任务
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