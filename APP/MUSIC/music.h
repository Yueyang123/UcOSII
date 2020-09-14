#ifndef __MUSIC_H
#define __MUSIC_H		
#include "sys.h"

#define SDA PBout(8)
 
void SendData ( u8 addr );    //·¢ËÍº¯Êý¡£
void OnUart_GPIO(void);       //GPI
void MUSIC_TASK(void);

#endif