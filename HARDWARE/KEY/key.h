#ifndef __KEY_H
#define __KEY_H	 
#include "sys.h"

			
void KEY_Init(void);//IO��ʼ��
u8 KEY_Scan(void);   //����ɨ�躯��
u8 ReScan(GPIO_TypeDef* GPIOX,uint16_t colPin,u8 colIndex);//����ɨ��				
				

#endif

