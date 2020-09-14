#ifndef __SIM900A_H__
#define __SIM900A_H__	 
#include "sys.h"
//////////////////////////////////////////////////////////////////////////////////	 
#define SIM_OK 0
#define SIM_COMMUNTION_ERR 0xff
#define SIM_CPIN_ERR 0xfe
#define SIM_CREG_FAIL 0xfd
#define SIM_MAKE_CALL_ERR 0Xfc
#define SIM_ATA_ERR       0xfb


extern u8 Flag_Rec_Call;


extern u8 SIM900_CSQ[3];
extern u8 GSM_Dect(void);
extern u8 SIM_CALL_ATA(void);
#endif





