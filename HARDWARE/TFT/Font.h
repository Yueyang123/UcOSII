#ifndef __FONT_H
#define __FONT_H 	   
//����ASCII��
//ƫ����32
//ASCII�ַ���
//ƫ����32
//��С:12*6
const unsigned char asc2_1206[95][12]={
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*" ",0*/
{0x00,0x00,0x04,0x04,0x04,0x04,0x04,0x04,0x00,0x04,0x00,0x00},/*"!",1*/
{0x00,0x14,0x0A,0x0A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*""",2*/
{0x00,0x00,0x14,0x14,0x3F,0x14,0x0A,0x3F,0x0A,0x0A,0x00,0x00},/*"#",3*/
{0x00,0x04,0x1E,0x15,0x05,0x06,0x0C,0x14,0x15,0x0F,0x04,0x00},/*"$",4*/
{0x00,0x00,0x12,0x15,0x0D,0x0A,0x14,0x2C,0x2A,0x12,0x00,0x00},/*"%",5*/
{0x00,0x00,0x04,0x0A,0x0A,0x1E,0x15,0x15,0x09,0x36,0x00,0x00},/*"&",6*/
{0x00,0x02,0x02,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"'",7*/
{0x00,0x20,0x10,0x08,0x08,0x08,0x08,0x08,0x08,0x10,0x20,0x00},/*"(",8*/
{0x00,0x02,0x04,0x08,0x08,0x08,0x08,0x08,0x08,0x04,0x02,0x00},/*")",9*/
{0x00,0x00,0x00,0x04,0x15,0x0E,0x0E,0x15,0x04,0x00,0x00,0x00},/*"*",10*/
{0x00,0x00,0x04,0x04,0x04,0x1F,0x04,0x04,0x04,0x00,0x00,0x00},/*"+",11*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x02,0x01},/*",",12*/
{0x00,0x00,0x00,0x00,0x00,0x1F,0x00,0x00,0x00,0x00,0x00,0x00},/*"-",13*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00},/*".",14*/
{0x00,0x10,0x08,0x08,0x08,0x04,0x04,0x02,0x02,0x02,0x01,0x00},/*"/",15*/
{0x00,0x00,0x0E,0x11,0x11,0x11,0x11,0x11,0x11,0x0E,0x00,0x00},/*"0",16*/
{0x00,0x00,0x04,0x06,0x04,0x04,0x04,0x04,0x04,0x0E,0x00,0x00},/*"1",17*/
{0x00,0x00,0x0E,0x11,0x11,0x08,0x04,0x02,0x01,0x1F,0x00,0x00},/*"2",18*/
{0x00,0x00,0x0E,0x11,0x10,0x0C,0x10,0x10,0x11,0x0E,0x00,0x00},/*"3",19*/
{0x00,0x00,0x08,0x0C,0x0A,0x0A,0x09,0x1E,0x08,0x18,0x00,0x00},/*"4",20*/
{0x00,0x00,0x1F,0x01,0x01,0x0F,0x10,0x10,0x11,0x0E,0x00,0x00},/*"5",21*/
{0x00,0x00,0x0E,0x09,0x01,0x0F,0x11,0x11,0x11,0x0E,0x00,0x00},/*"6",22*/
{0x00,0x00,0x1F,0x09,0x08,0x04,0x04,0x04,0x04,0x04,0x00,0x00},/*"7",23*/
{0x00,0x00,0x0E,0x11,0x11,0x0E,0x11,0x11,0x11,0x0E,0x00,0x00},/*"8",24*/
{0x00,0x00,0x0E,0x11,0x11,0x11,0x1E,0x10,0x12,0x0E,0x00,0x00},/*"9",25*/
{0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x04,0x00,0x00},/*":",26*/
{0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x04,0x04,0x00},/*";",27*/
{0x00,0x20,0x10,0x08,0x04,0x02,0x04,0x08,0x10,0x20,0x00,0x00},/*"<",28*/
{0x00,0x00,0x00,0x00,0x1F,0x00,0x00,0x1F,0x00,0x00,0x00,0x00},/*"=",29*/
{0x00,0x02,0x04,0x08,0x10,0x20,0x10,0x08,0x04,0x02,0x00,0x00},/*">",30*/
{0x00,0x00,0x0E,0x11,0x11,0x08,0x04,0x04,0x00,0x04,0x00,0x00},/*"?",31*/
{0x00,0x00,0x0E,0x11,0x19,0x15,0x15,0x1D,0x01,0x1E,0x00,0x00},/*"@",32*/
{0x00,0x00,0x04,0x04,0x0C,0x0A,0x0A,0x1E,0x12,0x33,0x00,0x00},/*"A",33*/
{0x00,0x00,0x0F,0x12,0x12,0x0E,0x12,0x12,0x12,0x0F,0x00,0x00},/*"B",34*/
{0x00,0x00,0x1E,0x11,0x01,0x01,0x01,0x01,0x11,0x0E,0x00,0x00},/*"C",35*/
{0x00,0x00,0x0F,0x12,0x12,0x12,0x12,0x12,0x12,0x0F,0x00,0x00},/*"D",36*/
{0x00,0x00,0x1F,0x12,0x0A,0x0E,0x0A,0x02,0x12,0x1F,0x00,0x00},/*"E",37*/
{0x00,0x00,0x1F,0x12,0x0A,0x0E,0x0A,0x02,0x02,0x07,0x00,0x00},/*"F",38*/
{0x00,0x00,0x1C,0x12,0x01,0x01,0x39,0x11,0x12,0x0C,0x00,0x00},/*"G",39*/
{0x00,0x00,0x33,0x12,0x12,0x1E,0x12,0x12,0x12,0x33,0x00,0x00},/*"H",40*/
{0x00,0x00,0x1F,0x04,0x04,0x04,0x04,0x04,0x04,0x1F,0x00,0x00},/*"I",41*/
{0x00,0x00,0x3E,0x08,0x08,0x08,0x08,0x08,0x08,0x09,0x07,0x00},/*"J",42*/
{0x00,0x00,0x37,0x12,0x0A,0x06,0x0A,0x0A,0x12,0x37,0x00,0x00},/*"K",43*/
{0x00,0x00,0x07,0x02,0x02,0x02,0x02,0x02,0x22,0x3F,0x00,0x00},/*"L",44*/
{0x00,0x00,0x1B,0x1B,0x1B,0x1B,0x15,0x15,0x15,0x15,0x00,0x00},/*"M",45*/
{0x00,0x00,0x3B,0x12,0x16,0x16,0x1A,0x1A,0x12,0x17,0x00,0x00},/*"N",46*/
{0x00,0x00,0x0E,0x11,0x11,0x11,0x11,0x11,0x11,0x0E,0x00,0x00},/*"O",47*/
{0x00,0x00,0x0F,0x12,0x12,0x0E,0x02,0x02,0x02,0x07,0x00,0x00},/*"P",48*/
{0x00,0x00,0x0E,0x11,0x11,0x11,0x11,0x17,0x19,0x0E,0x18,0x00},/*"Q",49*/
{0x00,0x00,0x0F,0x12,0x12,0x0E,0x0A,0x12,0x12,0x37,0x00,0x00},/*"R",50*/
{0x00,0x00,0x1E,0x11,0x01,0x06,0x08,0x10,0x11,0x0F,0x00,0x00},/*"S",51*/
{0x00,0x00,0x1F,0x15,0x04,0x04,0x04,0x04,0x04,0x0E,0x00,0x00},/*"T",52*/
{0x00,0x00,0x33,0x12,0x12,0x12,0x12,0x12,0x12,0x0C,0x00,0x00},/*"U",53*/
{0x00,0x00,0x33,0x12,0x12,0x0A,0x0A,0x0C,0x04,0x04,0x00,0x00},/*"V",54*/
{0x00,0x00,0x15,0x15,0x15,0x0E,0x0A,0x0A,0x0A,0x0A,0x00,0x00},/*"W",55*/
{0x00,0x00,0x1B,0x0A,0x0A,0x04,0x04,0x0A,0x0A,0x1B,0x00,0x00},/*"X",56*/
{0x00,0x00,0x1B,0x0A,0x0A,0x04,0x04,0x04,0x04,0x0E,0x00,0x00},/*"Y",57*/
{0x00,0x00,0x1F,0x09,0x08,0x04,0x04,0x02,0x12,0x1F,0x00,0x00},/*"Z",58*/
{0x00,0x1C,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x1C,0x00},/*"[",59*/
{0x00,0x02,0x02,0x02,0x04,0x04,0x08,0x08,0x08,0x10,0x00,0x00},/*"\",60*/
{0x00,0x0E,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x0E,0x00},/*"]",61*/
{0x00,0x04,0x0A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"^",62*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F},/*"_",63*/
{0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"`",64*/
{0x00,0x00,0x00,0x00,0x00,0x0C,0x12,0x1C,0x12,0x3C,0x00,0x00},/*"a",65*/
{0x00,0x00,0x03,0x02,0x02,0x0E,0x12,0x12,0x12,0x0E,0x00,0x00},/*"b",66*/
{0x00,0x00,0x00,0x00,0x00,0x1C,0x12,0x02,0x02,0x1C,0x00,0x00},/*"c",67*/
{0x00,0x00,0x18,0x10,0x10,0x1C,0x12,0x12,0x12,0x3C,0x00,0x00},/*"d",68*/
{0x00,0x00,0x00,0x00,0x00,0x0C,0x12,0x1E,0x02,0x1C,0x00,0x00},/*"e",69*/
{0x00,0x00,0x38,0x04,0x04,0x1E,0x04,0x04,0x04,0x1E,0x00,0x00},/*"f",70*/
{0x00,0x00,0x00,0x00,0x00,0x3C,0x12,0x0C,0x02,0x1E,0x22,0x1C},/*"g",71*/
{0x00,0x00,0x03,0x02,0x02,0x0E,0x12,0x12,0x12,0x37,0x00,0x00},/*"h",72*/
{0x00,0x00,0x04,0x00,0x00,0x06,0x04,0x04,0x04,0x0E,0x00,0x00},/*"i",73*/
{0x00,0x00,0x08,0x00,0x00,0x0C,0x08,0x08,0x08,0x08,0x08,0x07},/*"j",74*/
{0x00,0x00,0x03,0x02,0x02,0x3A,0x0A,0x0E,0x12,0x37,0x00,0x00},/*"k",75*/
{0x00,0x00,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0x1F,0x00,0x00},/*"l",76*/
{0x00,0x00,0x00,0x00,0x00,0x0F,0x15,0x15,0x15,0x15,0x00,0x00},/*"m",77*/
{0x00,0x00,0x00,0x00,0x00,0x0F,0x12,0x12,0x12,0x37,0x00,0x00},/*"n",78*/
{0x00,0x00,0x00,0x00,0x00,0x0C,0x12,0x12,0x12,0x0C,0x00,0x00},/*"o",79*/
{0x00,0x00,0x00,0x00,0x00,0x0F,0x12,0x12,0x12,0x0E,0x02,0x07},/*"p",80*/
{0x00,0x00,0x00,0x00,0x00,0x1C,0x12,0x12,0x12,0x1C,0x10,0x38},/*"q",81*/
{0x00,0x00,0x00,0x00,0x00,0x1B,0x06,0x02,0x02,0x07,0x00,0x00},/*"r",82*/
{0x00,0x00,0x00,0x00,0x00,0x1E,0x02,0x0C,0x10,0x1E,0x00,0x00},/*"s",83*/
{0x00,0x00,0x00,0x04,0x04,0x0E,0x04,0x04,0x04,0x18,0x00,0x00},/*"t",84*/
{0x00,0x00,0x00,0x00,0x00,0x1B,0x12,0x12,0x12,0x3C,0x00,0x00},/*"u",85*/
{0x00,0x00,0x00,0x00,0x00,0x37,0x12,0x0A,0x0C,0x04,0x00,0x00},/*"v",86*/
{0x00,0x00,0x00,0x00,0x00,0x15,0x15,0x0E,0x0A,0x0A,0x00,0x00},/*"w",87*/
{0x00,0x00,0x00,0x00,0x00,0x1B,0x0A,0x04,0x0A,0x1B,0x00,0x00},/*"x",88*/
{0x00,0x00,0x00,0x00,0x00,0x37,0x12,0x0A,0x0C,0x04,0x04,0x03},/*"y",89*/
{0x00,0x00,0x00,0x00,0x00,0x1E,0x08,0x04,0x04,0x1E,0x00,0x00},/*"z",90*/
{0x00,0x18,0x08,0x08,0x08,0x04,0x08,0x08,0x08,0x08,0x18,0x00},/*"{",91*/
{0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08},/*"|",92*/
{0x00,0x06,0x04,0x04,0x04,0x08,0x04,0x04,0x04,0x04,0x06,0x00},/*"}",93*/
{0x02,0x25,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00} /*"~",94*/
}; 
const unsigned char asc2_1608[95][16]={
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*" ",0*/
{0x00,0x00,0x00,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x00,0x00,0x18,0x18,0x00,0x00},/*"!",1*/
{0x00,0x48,0x6C,0x24,0x12,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*""",2*/
{0x00,0x00,0x00,0x24,0x24,0x24,0x7F,0x12,0x12,0x12,0x7F,0x12,0x12,0x12,0x00,0x00},/*"#",3*/
{0x00,0x00,0x08,0x1C,0x2A,0x2A,0x0A,0x0C,0x18,0x28,0x28,0x2A,0x2A,0x1C,0x08,0x08},/*"$",4*/
{0x00,0x00,0x00,0x22,0x25,0x15,0x15,0x15,0x2A,0x58,0x54,0x54,0x54,0x22,0x00,0x00},/*"%",5*/
{0x00,0x00,0x00,0x0C,0x12,0x12,0x12,0x0A,0x76,0x25,0x29,0x11,0x91,0x6E,0x00,0x00},/*"&",6*/
{0x00,0x06,0x06,0x04,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"'",7*/
{0x00,0x40,0x20,0x10,0x10,0x08,0x08,0x08,0x08,0x08,0x08,0x10,0x10,0x20,0x40,0x00},/*"(",8*/
{0x00,0x02,0x04,0x08,0x08,0x10,0x10,0x10,0x10,0x10,0x10,0x08,0x08,0x04,0x02,0x00},/*")",9*/
{0x00,0x00,0x00,0x00,0x08,0x08,0x6B,0x1C,0x1C,0x6B,0x08,0x08,0x00,0x00,0x00,0x00},/*"*",10*/
{0x00,0x00,0x00,0x00,0x08,0x08,0x08,0x08,0x7F,0x08,0x08,0x08,0x08,0x00,0x00,0x00},/*"+",11*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x06,0x04,0x03},/*",",12*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"-",13*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x06,0x00,0x00},/*".",14*/
{0x00,0x00,0x80,0x40,0x40,0x20,0x20,0x10,0x10,0x08,0x08,0x04,0x04,0x02,0x02,0x00},/*"/",15*/
{0x00,0x00,0x00,0x18,0x24,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x24,0x18,0x00,0x00},/*"0",16*/
{0x00,0x00,0x00,0x08,0x0E,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x3E,0x00,0x00},/*"1",17*/
{0x00,0x00,0x00,0x3C,0x42,0x42,0x42,0x20,0x20,0x10,0x08,0x04,0x42,0x7E,0x00,0x00},/*"2",18*/
{0x00,0x00,0x00,0x3C,0x42,0x42,0x20,0x18,0x20,0x40,0x40,0x42,0x22,0x1C,0x00,0x00},/*"3",19*/
{0x00,0x00,0x00,0x20,0x30,0x28,0x24,0x24,0x22,0x22,0x7E,0x20,0x20,0x78,0x00,0x00},/*"4",20*/
{0x00,0x00,0x00,0x7E,0x02,0x02,0x02,0x1A,0x26,0x40,0x40,0x42,0x22,0x1C,0x00,0x00},/*"5",21*/
{0x00,0x00,0x00,0x38,0x24,0x02,0x02,0x1A,0x26,0x42,0x42,0x42,0x24,0x18,0x00,0x00},/*"6",22*/
{0x00,0x00,0x00,0x7E,0x22,0x22,0x10,0x10,0x08,0x08,0x08,0x08,0x08,0x08,0x00,0x00},/*"7",23*/	 
{0x00,0x00,0x00,0x3C,0x42,0x42,0x42,0x24,0x18,0x24,0x42,0x42,0x42,0x3C,0x00,0x00},/*"8",24*/
{0x00,0x00,0x00,0x18,0x24,0x42,0x42,0x42,0x64,0x58,0x40,0x40,0x24,0x1C,0x00,0x00},/*"9",25*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00},/*":",26*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x08,0x08,0x04},/*";",27*/
{0x00,0x00,0x00,0x40,0x20,0x10,0x08,0x04,0x02,0x04,0x08,0x10,0x20,0x40,0x00,0x00},/*"<",28*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x00,0x00},/*"=",29*/
{0x00,0x00,0x00,0x02,0x04,0x08,0x10,0x20,0x40,0x20,0x10,0x08,0x04,0x02,0x00,0x00},/*">",30*/
{0x00,0x00,0x00,0x3C,0x42,0x42,0x46,0x40,0x20,0x10,0x10,0x00,0x18,0x18,0x00,0x00},/*"?",31*/
{0x00,0x00,0x00,0x1C,0x22,0x5A,0x55,0x55,0x55,0x55,0x2D,0x42,0x22,0x1C,0x00,0x00},/*"@",32*/
{0x00,0x00,0x00,0x08,0x08,0x18,0x14,0x14,0x24,0x3C,0x22,0x42,0x42,0xE7,0x00,0x00},/*"A",33*/
{0x00,0x00,0x00,0x1F,0x22,0x22,0x22,0x1E,0x22,0x42,0x42,0x42,0x22,0x1F,0x00,0x00},/*"B",34*/
{0x00,0x00,0x00,0x7C,0x42,0x42,0x01,0x01,0x01,0x01,0x01,0x42,0x22,0x1C,0x00,0x00},/*"C",35*/
{0x00,0x00,0x00,0x1F,0x22,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x22,0x1F,0x00,0x00},/*"D",36*/
{0x00,0x00,0x00,0x3F,0x42,0x12,0x12,0x1E,0x12,0x12,0x02,0x42,0x42,0x3F,0x00,0x00},/*"E",37*/
{0x00,0x00,0x00,0x3F,0x42,0x12,0x12,0x1E,0x12,0x12,0x02,0x02,0x02,0x07,0x00,0x00},/*"F",38*/
{0x00,0x00,0x00,0x3C,0x22,0x22,0x01,0x01,0x01,0x71,0x21,0x22,0x22,0x1C,0x00,0x00},/*"G",39*/
{0x00,0x00,0x00,0xE7,0x42,0x42,0x42,0x42,0x7E,0x42,0x42,0x42,0x42,0xE7,0x00,0x00},/*"H",40*/
{0x00,0x00,0x00,0x3E,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x3E,0x00,0x00},/*"I",41*/
{0x00,0x00,0x00,0x7C,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x11,0x0F},/*"J",42*/
{0x00,0x00,0x00,0x77,0x22,0x12,0x0A,0x0E,0x0A,0x12,0x12,0x22,0x22,0x77,0x00,0x00},/*"K",43*/
{0x00,0x00,0x00,0x07,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x42,0x7F,0x00,0x00},/*"L",44*/
{0x00,0x00,0x00,0x77,0x36,0x36,0x36,0x36,0x2A,0x2A,0x2A,0x2A,0x2A,0x6B,0x00,0x00},/*"M",45*/
{0x00,0x00,0x00,0xE3,0x46,0x46,0x4A,0x4A,0x52,0x52,0x52,0x62,0x62,0x47,0x00,0x00},/*"N",46*/
{0x00,0x00,0x00,0x1C,0x22,0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x22,0x1C,0x00,0x00},/*"O",47*/
{0x00,0x00,0x00,0x3F,0x42,0x42,0x42,0x42,0x3E,0x02,0x02,0x02,0x02,0x07,0x00,0x00},/*"P",48*/
{0x00,0x00,0x00,0x1C,0x22,0x41,0x41,0x41,0x41,0x41,0x4D,0x53,0x32,0x1C,0x60,0x00},/*"Q",49*/
{0x00,0x00,0x00,0x3F,0x42,0x42,0x42,0x3E,0x12,0x12,0x22,0x22,0x42,0xC7,0x00,0x00},/*"R",50*/
{0x00,0x00,0x00,0x7C,0x42,0x42,0x02,0x04,0x18,0x20,0x40,0x42,0x42,0x3E,0x00,0x00},/*"S",51*/
{0x00,0x00,0x00,0x7F,0x49,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x1C,0x00,0x00},/*"T",52*/
{0x00,0x00,0x00,0xE7,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x3C,0x00,0x00},/*"U",53*/
{0x00,0x00,0x00,0xE7,0x42,0x42,0x22,0x24,0x24,0x14,0x14,0x18,0x08,0x08,0x00,0x00},/*"V",54*/
{0x00,0x00,0x00,0x6B,0x49,0x49,0x49,0x49,0x55,0x55,0x36,0x22,0x22,0x22,0x00,0x00},/*"W",55*/
{0x00,0x00,0x00,0xE7,0x42,0x24,0x24,0x18,0x18,0x18,0x24,0x24,0x42,0xE7,0x00,0x00},/*"X",56*/
{0x00,0x00,0x00,0x77,0x22,0x22,0x14,0x14,0x08,0x08,0x08,0x08,0x08,0x1C,0x00,0x00},/*"Y",57*/
{0x00,0x00,0x00,0x7E,0x21,0x20,0x10,0x10,0x08,0x04,0x04,0x42,0x42,0x3F,0x00,0x00},/*"Z",58*/
{0x00,0x78,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x78,0x00},/*"[",59*/
{0x00,0x00,0x02,0x02,0x04,0x04,0x08,0x08,0x08,0x10,0x10,0x20,0x20,0x20,0x40,0x40},/*"\",60*/
{0x00,0x1E,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x1E,0x00},/*"]",61*/
{0x00,0x38,0x44,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"^",62*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF},/*"_",63*/
{0x00,0x06,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"`",64*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x42,0x78,0x44,0x42,0x42,0xFC,0x00,0x00},/*"a",65*/
{0x00,0x00,0x00,0x03,0x02,0x02,0x02,0x1A,0x26,0x42,0x42,0x42,0x26,0x1A,0x00,0x00},/*"b",66*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x44,0x02,0x02,0x02,0x44,0x38,0x00,0x00},/*"c",67*/
{0x00,0x00,0x00,0x60,0x40,0x40,0x40,0x78,0x44,0x42,0x42,0x42,0x64,0xD8,0x00,0x00},/*"d",68*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x42,0x7E,0x02,0x02,0x42,0x3C,0x00,0x00},/*"e",69*/
{0x00,0x00,0x00,0xF0,0x88,0x08,0x08,0x7E,0x08,0x08,0x08,0x08,0x08,0x3E,0x00,0x00},/*"f",70*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x22,0x22,0x1C,0x02,0x3C,0x42,0x42,0x3C},/*"g",71*/
{0x00,0x00,0x00,0x03,0x02,0x02,0x02,0x3A,0x46,0x42,0x42,0x42,0x42,0xE7,0x00,0x00},/*"h",72*/
{0x00,0x00,0x00,0x0C,0x0C,0x00,0x00,0x0E,0x08,0x08,0x08,0x08,0x08,0x3E,0x00,0x00},/*"i",73*/
{0x00,0x00,0x00,0x30,0x30,0x00,0x00,0x38,0x20,0x20,0x20,0x20,0x20,0x20,0x22,0x1E},/*"j",74*/
{0x00,0x00,0x00,0x03,0x02,0x02,0x02,0x72,0x12,0x0A,0x16,0x12,0x22,0x77,0x00,0x00},/*"k",75*/
{0x00,0x00,0x00,0x0E,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x3E,0x00,0x00},/*"l",76*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x92,0x92,0x92,0x92,0x92,0xB7,0x00,0x00},/*"m",77*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3B,0x46,0x42,0x42,0x42,0x42,0xE7,0x00,0x00},/*"n",78*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x42,0x42,0x42,0x42,0x42,0x3C,0x00,0x00},/*"o",79*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1B,0x26,0x42,0x42,0x42,0x22,0x1E,0x02,0x07},/*"p",80*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x44,0x42,0x42,0x42,0x44,0x78,0x40,0xE0},/*"q",81*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x77,0x4C,0x04,0x04,0x04,0x04,0x1F,0x00,0x00},/*"r",82*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x42,0x02,0x3C,0x40,0x42,0x3E,0x00,0x00},/*"s",83*/
{0x00,0x00,0x00,0x00,0x00,0x08,0x08,0x3E,0x08,0x08,0x08,0x08,0x08,0x30,0x00,0x00},/*"t",84*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x63,0x42,0x42,0x42,0x42,0x62,0xDC,0x00,0x00},/*"u",85*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE7,0x42,0x24,0x24,0x14,0x08,0x08,0x00,0x00},/*"v",86*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xEB,0x49,0x49,0x55,0x55,0x22,0x22,0x00,0x00},/*"w",87*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x76,0x24,0x18,0x18,0x18,0x24,0x6E,0x00,0x00},/*"x",88*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE7,0x42,0x24,0x24,0x14,0x18,0x08,0x08,0x07},/*"y",89*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x22,0x10,0x08,0x08,0x44,0x7E,0x00,0x00},/*"z",90*/
{0x00,0xC0,0x20,0x20,0x20,0x20,0x20,0x10,0x20,0x20,0x20,0x20,0x20,0x20,0xC0,0x00},/*"{",91*/
{0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10},/*"|",92*/
{0x00,0x06,0x08,0x08,0x08,0x08,0x08,0x10,0x08,0x08,0x08,0x08,0x08,0x08,0x06,0x00},/*"}",93*/
{0x0C,0x32,0xC2,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"~",94*/
}; 
const unsigned char asc2_2412[12][48]={
#if 1
{0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xE0,0x1F,0xC0,0x6F,0xD0,0x77,0xB0,0x70,0x30,
0x70,0x30,0x70,0x30,0x70,0x30,0x70,0x30,0x70,0x30,0x20,0x10,0x70,0x30,0x70,0x30,
0x70,0x30,0x70,0x30,0x70,0x30,0x70,0x30,0x67,0xD0,0x6F,0xE0,0x1F,0xE0,0x1F,0xE0},/*"0",0*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x78,0x00,0x36,0x00,0x2E,0x00,0x0E,0x00,
0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x04,0x00,0x00,0x00,0x04,0x00,0x0E,0x00,
0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x04,0x00},/*"1",1*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xF0,0x7F,0xE0,0x7F,0xE0,0x3F,0xD0,0x00,0x30,
0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x1F,0xD0,0x1F,0xE0,0x2F,0xE0,0x77,0xE0,
0x70,0x00,0x70,0x00,0x70,0x00,0x60,0x00,0x6F,0xF0,0x5F,0xF0,0x3F,0xF0,0x3F,0xF0},/*"2",2*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xF0,0x7F,0xF0,0x7F,0xE0,0x3F,0xD0,0x00,0x30,
0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x3F,0xB0,0x7F,0xD0,0x7F,0xD0,0x3F,0xB0,
0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x3F,0xD0,0x7F,0xE0,0x7F,0xF0,0x3F,0xF0},/*"3",3*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x10,0x70,0x30,0x70,0x30,0x70,0x30,0x70,0x30,
0x70,0x30,0x70,0x30,0x70,0x30,0x70,0x30,0x37,0xB0,0x0F,0xD0,0x0F,0xD0,0x07,0xB0,
0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x10},/*"4",4*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xF0,0x5F,0xF0,0x6F,0xF0,0x77,0xF0,0x70,0x00,
0x70,0x00,0x70,0x00,0x70,0x00,0x3F,0x80,0x1F,0xC0,0x1F,0xC0,0x0F,0xB0,0x00,0x30,
0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x3F,0xD0,0x7F,0xD0,0x7F,0xE0,0x3F,0xE0},/*"5",5*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xF0,0x1F,0xF0,0x6F,0xF0,0x77,0xF0,0x70,0x00,
0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x77,0xC0,0x2F,0xC0,0x6F,0xD0,0x77,0xB0,
0x70,0x30,0x70,0x30,0x70,0x30,0x70,0x30,0x67,0xD0,0x6F,0xE0,0x1F,0xE0,0x1F,0xE0},/*"6",6*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xE0,0x7F,0xE0,0x7F,0xD0,0x3F,0x90,0x00,0x30,
0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x10,0x00,0x10,0x00,0x30,
0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x10},/*"7",7*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xE0,0x1F,0xC0,0x6F,0xD0,0x77,0xB0,0x70,0x30,
0x70,0x30,0x70,0x30,0x70,0x30,0x70,0x30,0x77,0xB0,0x2F,0xD0,0x6F,0xF0,0x77,0xB0,
0x70,0x30,0x70,0x30,0x70,0x30,0x70,0x30,0x67,0xD0,0x6F,0xE0,0x1F,0xE0,0x1F,0xC0},/*"8",8*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xE0,0x1F,0xC0,0x6F,0xD0,0x77,0xB0,0x70,0x30,
0x70,0x30,0x70,0x30,0x70,0x30,0x70,0x30,0x6F,0xB0,0x0F,0xD0,0x0F,0xF0,0x0F,0xB0,
0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x3F,0xD0,0x7F,0xE0,0x7F,0xE0,0x3F,0xC0},/*"9",9*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x60,0x00,0x60,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x20,0x00,0x60,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*":",0*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x3C,0x00,0x3C,0x00,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*".",0*/
#endif
};



typedef struct 
{
       unsigned char Index[2];	
       char Msk[32];
}typFNT_GB16; 
//����ȡģ�����峣��С��
const typFNT_GB16 tfont16[]=
{

"��",0x10,0x00,0x11,0xF8,0x10,0x10,0x10,0x20,0xFC,0x40,0x10,0x80,0x31,0xFE,0x38,0x92,
0x54,0x92,0x54,0x92,0x91,0x12,0x11,0x22,0x12,0x22,0x14,0x42,0x10,0x94,0x11,0x08,/*"��",0*/
"Խ",0x10,0x28,0x10,0x24,0x10,0x20,0x7D,0xFC,0x11,0x20,0x11,0x24,0xFD,0x24,0x11,0x28,
0x11,0x28,0x51,0x10,0x5D,0x94,0x51,0x2C,0x70,0x44,0x50,0x00,0x4F,0xFE,0x80,0x00,/*"Խ",1*/
"��",0x01,0x00,0x01,0x00,0x7F,0xFC,0x01,0x00,0x1F,0xF0,0x10,0x10,0x1F,0xF0,0x10,0x10,
0x1F,0xF0,0x10,0x10,0x1F,0xF0,0x10,0x10,0xFF,0xFE,0x08,0x20,0x10,0x10,0x20,0x08,/*"��",2*/
"˧",0x08,0x20,0x08,0x20,0x48,0x20,0x48,0x20,0x49,0xFC,0x49,0x24,0x49,0x24,0x49,0x24,
0x49,0x24,0x49,0x24,0x49,0x24,0x09,0x34,0x11,0x28,0x10,0x20,0x20,0x20,0x40,0x20,/*"˧",3*/
"��",0x10,0x80,0x10,0x80,0x20,0xF8,0x21,0x08,0x4B,0x10,0xFC,0xA0,0x10,0x40,0x20,0xA0,
0x43,0x18,0xFC,0x06,0x40,0xC0,0x00,0x20,0x18,0x10,0xE1,0x80,0x40,0x60,0x00,0x10,/*"��",0*/
"��",0x02,0x00,0x02,0x00,0xFF,0xFE,0x04,0x00,0x04,0x00,0x0F,0xF0,0x08,0x10,0x18,0x10,
0x2F,0xF0,0x48,0x10,0x88,0x10,0x0F,0xF0,0x08,0x10,0x08,0x10,0x08,0x50,0x08,0x20,/*"��",1*/
"һ",0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFE,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"һ",2*/
"��",0x00,0x00,0x3F,0xF8,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0xFF,0xFE,0x01,0x00,
0x02,0x80,0x02,0x80,0x04,0x40,0x04,0x40,0x08,0x20,0x10,0x10,0x20,0x08,0xC0,0x06,/*"��",3*/
"��",0x04,0x40,0x0E,0x50,0x78,0x48,0x08,0x48,0x08,0x40,0xFF,0xFE,0x08,0x40,0x08,0x44,
0x0A,0x44,0x0C,0x48,0x18,0x30,0x68,0x22,0x08,0x52,0x08,0x8A,0x2B,0x06,0x10,0x02,/*"��",4*/
"��",0x09,0x00,0x08,0x80,0x08,0xBC,0x12,0x04,0x12,0x04,0x32,0x04,0x32,0x04,0x52,0x04,
0x92,0x04,0x12,0x04,0x12,0x04,0x12,0x04,0x12,0x04,0x12,0x04,0x12,0x14,0x12,0x08,/*"��",5*/
"��",0x08,0x00,0x08,0xBE,0x7E,0xA2,0x09,0x24,0x0A,0x24,0xFF,0xE8,0x08,0x24,0x10,0x24,
0x3F,0x22,0x61,0x22,0xA1,0x22,0x3F,0x34,0x21,0x28,0x21,0x20,0x3F,0x20,0x21,0x20,/*"��",6*/
"��",0x01,0x00,0x01,0x00,0x02,0x80,0x04,0x40,0x08,0x20,0x30,0x18,0xCF,0xE6,0x00,0x00,
0x00,0x00,0x7F,0xFC,0x02,0x00,0x04,0x00,0x08,0x20,0x10,0x10,0x3F,0xF8,0x10,0x08,/*"��",7*/
"��",0x00,0x50,0x00,0x48,0x00,0x40,0x3F,0xFE,0x20,0x40,0x20,0x40,0x20,0x44,0x3E,0x44,
0x22,0x44,0x22,0x28,0x22,0x28,0x22,0x12,0x2A,0x32,0x44,0x4A,0x40,0x86,0x81,0x02,/*"��",8*/
"Ϊ",0x01,0x00,0x21,0x00,0x11,0x00,0x11,0x00,0x01,0x00,0x7F,0xF8,0x02,0x08,0x02,0x08,
0x02,0x88,0x04,0x48,0x04,0x48,0x08,0x08,0x10,0x08,0x20,0x08,0x40,0x50,0x80,0x20,/*"Ϊ",9*/
"��",0x00,0x00,0x7E,0x7C,0x12,0x44,0x12,0x48,0x12,0x48,0x7E,0x50,0x12,0x48,0x12,0x48,
0x7E,0x44,0x12,0x44,0x12,0x44,0x22,0x68,0x22,0x50,0x4A,0x40,0x84,0x40,0x00,0x40,/*"��",10*/
"��",0x01,0x00,0x01,0x00,0x02,0x80,0x04,0x40,0x08,0x20,0x10,0x10,0x21,0x08,0xC1,0x06,
0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,/*"��",11*/
"��",0x1F,0xF0,0x10,0x10,0x1F,0xF0,0x10,0x10,0x1F,0xF0,0x00,0x00,0xFF,0xFE,0x22,0x00,
0x3E,0xF8,0x22,0x88,0x3E,0x90,0x22,0x50,0x2F,0x20,0xF2,0x50,0x42,0x88,0x03,0x06,/*"��",12*/
"��",0x10,0x00,0x10,0xFC,0x10,0x04,0x10,0x08,0xFC,0x10,0x24,0x20,0x24,0x20,0x25,0xFE,
0x24,0x20,0x48,0x20,0x28,0x20,0x10,0x20,0x28,0x20,0x44,0x20,0x84,0xA0,0x00,0x40,/*"��",13*/
"��",0x10,0x40,0x10,0x40,0x20,0x40,0x7E,0x7C,0x42,0x84,0x42,0x84,0x43,0x04,0x42,0x44,
0x7E,0x24,0x42,0x24,0x42,0x04,0x42,0x04,0x42,0x04,0x7E,0x04,0x42,0x28,0x00,0x10,/*"��",14*/
"��",0x01,0x00,0x02,0x00,0x04,0x00,0x1F,0xF0,0x10,0x10,0x10,0x10,0x10,0x10,0x1F,0xF0,
0x10,0x10,0x10,0x10,0x1F,0xF0,0x10,0x10,0x10,0x10,0x10,0x10,0x1F,0xF0,0x10,0x10,/*"��",15*/
"��",0x00,0x00,0x3F,0xF0,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x3F,0xF0,
0x20,0x00,0x20,0x00,0x20,0x00,0x20,0x04,0x20,0x04,0x20,0x04,0x1F,0xFC,0x00,0x00,/*"��",16*/
"��",0x00,0x80,0x00,0x80,0xFC,0x80,0x04,0xFC,0x05,0x04,0x49,0x08,0x2A,0x40,0x14,0x40,
0x10,0x40,0x28,0xA0,0x24,0xA0,0x45,0x10,0x81,0x10,0x02,0x08,0x04,0x04,0x08,0x02,/*"��",17*/
"ӭ",0x00,0x00,0x20,0x80,0x13,0x3C,0x12,0x24,0x02,0x24,0x02,0x24,0xF2,0x24,0x12,0x24,
0x12,0x24,0x12,0xB4,0x13,0x28,0x12,0x20,0x10,0x20,0x28,0x20,0x47,0xFE,0x00,0x00,/*"ӭ",18*/
"ʹ",0x10,0x40,0x10,0x40,0x1F,0xFE,0x20,0x40,0x20,0x40,0x67,0xFC,0x64,0x44,0xA4,0x44,
0x27,0xFC,0x20,0x40,0x22,0x40,0x21,0x40,0x20,0x80,0x21,0x40,0x22,0x30,0x2C,0x0E,/*"ʹ",19*/
"��",0x00,0x00,0x3F,0xF8,0x21,0x08,0x21,0x08,0x21,0x08,0x3F,0xF8,0x21,0x08,0x21,0x08,
0x21,0x08,0x3F,0xF8,0x21,0x08,0x21,0x08,0x21,0x08,0x41,0x08,0x41,0x28,0x80,0x10,/*"��",20*/
"ɵ",0x08,0x40,0x08,0x80,0x0B,0xFC,0x12,0x94,0x12,0x64,0x32,0x94,0x33,0xFC,0x50,0x90,
0x91,0x08,0x12,0x84,0x14,0xFA,0x11,0x08,0x12,0x90,0x10,0x60,0x11,0x98,0x16,0x06,/*"ɵ",21*/
"�",0x10,0x00,0x11,0xF8,0x10,0x48,0x10,0x48,0xFC,0x48,0x24,0x48,0x24,0x48,0x25,0xF8,
0x24,0x88,0x48,0x88,0x28,0x88,0x10,0x88,0x28,0x88,0x44,0x88,0x83,0xFE,0x00,0x00,/*"�",22*/
"��",0x08,0x40,0x48,0x80,0x49,0xFC,0x49,0x24,0x49,0x24,0x7D,0xFC,0x41,0x24,0x41,0x44,
0x79,0xFC,0x48,0x90,0x49,0x10,0x4B,0xFE,0x48,0x10,0x48,0x10,0x48,0x10,0x88,0x10,/*"��",23*/
"��",0x00,0x10,0x00,0xF8,0x3F,0x00,0x01,0x00,0x01,0x00,0x3F,0xF8,0x01,0x00,0x01,0x00,
0x01,0x00,0xFF,0xFE,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x05,0x00,0x02,0x00,/*"��",24*/
"��",0x10,0x00,0x11,0xF0,0x11,0x10,0x11,0x10,0xFD,0x10,0x11,0x10,0x31,0x10,0x39,0x10,
0x55,0x10,0x55,0x10,0x91,0x10,0x11,0x12,0x11,0x12,0x12,0x12,0x12,0x0E,0x14,0x00,/*"��",25*/
"��",0x10,0x40,0x10,0x48,0x12,0x44,0x12,0x40,0xFB,0xFE,0x10,0x80,0x14,0x80,0x18,0xFC,
0x31,0x44,0xD1,0x44,0x11,0x48,0x12,0x50,0x12,0x20,0x14,0x50,0x58,0x88,0x23,0x06,/*"��",0*/
"��",0x00,0x00,0x1F,0xF0,0x10,0x10,0x10,0x10,0x10,0x10,0x1F,0xF0,0x00,0x00,0xFF,0xFE,
0x08,0x00,0x10,0x00,0x1F,0xF0,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0xA0,0x00,0x40,/*"��",1*/
"��",0x02,0x00,0x01,0x00,0x01,0x00,0xFF,0xFE,0x10,0x10,0x10,0x10,0x08,0x20,0x08,0x20,
0x04,0x40,0x02,0x80,0x01,0x00,0x02,0x80,0x04,0x40,0x08,0x20,0x30,0x18,0xC0,0x06,/*"��",2*/
"��",0x08,0x20,0x08,0x20,0x09,0x20,0x11,0x20,0x11,0xFC,0x32,0x20,0x32,0x20,0x54,0x20,
0x90,0x20,0x17,0xFE,0x10,0x20,0x10,0x20,0x10,0x20,0x10,0x20,0x10,0x20,0x10,0x20,/*"��",3*/
"��",0x20,0x40,0x3F,0x7E,0x48,0x90,0x85,0x08,0x01,0x00,0x7F,0xFE,0x40,0x02,0x9F,0xE4,
0x10,0x20,0x1F,0xE0,0x10,0x00,0x1F,0xF0,0x10,0x10,0x10,0x10,0x1F,0xF0,0x10,0x10,/*"��",4*/
"��",0x00,0x00,0x01,0xFC,0xFD,0x24,0x11,0x24,0x11,0xFC,0x11,0x24,0x11,0x24,0x7D,0xFC,
0x10,0x20,0x10,0x20,0x11,0xFC,0x10,0x20,0x1C,0x20,0xE0,0x20,0x43,0xFE,0x00,0x00,/*"��",5*/
"��",0x01,0x00,0x11,0x10,0x11,0x08,0x22,0x00,0x3F,0xFC,0x02,0x00,0x04,0x00,0x07,0xF8,
0x0A,0x08,0x09,0x08,0x11,0x10,0x10,0xA0,0x20,0x40,0x40,0xA0,0x03,0x18,0x1C,0x06,/*"��",6*/
"��",0x02,0x08,0x21,0x08,0x11,0x10,0x17,0xFC,0x00,0x40,0x00,0x40,0xF0,0x40,0x17,0xFE,
0x10,0x40,0x10,0xA0,0x10,0x90,0x11,0x08,0x12,0x08,0x28,0x00,0x47,0xFE,0x00,0x00,/*"��",7*/
"��",0x20,0x00,0x21,0xFE,0x3C,0x00,0x50,0x00,0x90,0xFC,0x10,0x84,0x10,0x84,0xFE,0x84,
0x10,0xFC,0x10,0x00,0x10,0x84,0x28,0x44,0x24,0x48,0x44,0x00,0x41,0xFE,0x80,0x00,/*"��",8*/
"��",0x08,0x40,0x08,0x20,0x0B,0xFE,0x10,0x00,0x10,0x00,0x31,0xFC,0x30,0x00,0x50,0x00,
0x91,0xFC,0x10,0x00,0x10,0x00,0x11,0xFC,0x11,0x04,0x11,0x04,0x11,0xFC,0x11,0x04,/*"��",9*/
"��",0x01,0x00,0x01,0x00,0x7F,0xFC,0x05,0x40,0x09,0x20,0x31,0x18,0xC1,0x06,0x1F,0xF0,
0x10,0x10,0x1F,0xF0,0x10,0x10,0x1F,0xF0,0x10,0x10,0x00,0x00,0xFF,0xFE,0x00,0x00,/*"��",10*/
"��",0x00,0xF8,0x7F,0x00,0x01,0x00,0x3F,0xF8,0x02,0x00,0xFF,0xFE,0x04,0x00,0x08,0x00,
0x1F,0xF0,0x28,0x10,0x4F,0xF0,0x88,0x10,0x0F,0xF0,0x08,0x10,0x0F,0xF0,0x08,0x10,/*"��",11*/
"̰",0x01,0x00,0x02,0x80,0x04,0x40,0x09,0x20,0x30,0x98,0xCF,0xE6,0x00,0x40,0x00,0x80,
0x1F,0xF0,0x10,0x10,0x11,0x10,0x11,0x10,0x11,0x10,0x02,0x60,0x0C,0x18,0x70,0x04,/*"̰",14*/
"��",0x00,0x80,0x00,0x80,0x79,0x00,0x49,0xFE,0x4A,0x00,0x4C,0x00,0x49,0xF8,0x48,0x08,
0x48,0x10,0x48,0x60,0x78,0x80,0x49,0x00,0x02,0x02,0x02,0x02,0x01,0xFE,0x00,0x00,/*"��",15*/
"��",0x10,0x20,0x10,0x10,0x10,0x10,0x7D,0xFE,0x55,0x02,0x56,0x04,0x54,0x80,0x54,0x88,
0x7C,0x90,0x50,0xA0,0x10,0xC0,0x14,0x82,0x1E,0x82,0xE2,0x82,0x40,0x7E,0x00,0x00,/*"��",16*/
"��",0x10,0x28,0x11,0xA4,0x17,0x24,0x21,0x20,0x21,0x20,0x6F,0xFE,0x61,0x20,0xA1,0x24,
0x21,0xA4,0x23,0x28,0x2D,0x28,0x21,0x10,0x21,0x12,0x21,0x2A,0x25,0x46,0x22,0x82,/*"��",0*/
"��",0x00,0x00,0x3F,0xF8,0x24,0x48,0x24,0x48,0x24,0x48,0x3F,0xF8,0x02,0x00,0x04,0x00,
0x0F,0xF0,0x10,0x10,0x68,0x20,0x04,0x40,0x02,0x80,0x03,0x00,0x1C,0x00,0xE0,0x00,/*"��",1*/
"˹",0x22,0x00,0x22,0x04,0x7F,0x78,0x22,0x40,0x22,0x40,0x3E,0x40,0x22,0x7E,0x22,0x48,
0x3E,0x48,0x22,0x48,0x22,0x48,0xFF,0x48,0x04,0x48,0x22,0x88,0x41,0x88,0x81,0x08,/*"˹",2*/
"��",0x02,0x00,0x01,0x00,0x01,0x00,0xFF,0xFE,0x04,0x00,0x04,0x00,0x04,0x00,0x07,0xF0,
0x04,0x10,0x04,0x10,0x04,0x10,0x08,0x10,0x08,0x10,0x10,0x10,0x20,0xA0,0x40,0x40,/*"��",3*/
"��",0x10,0x40,0x10,0x40,0x10,0x40,0x13,0xFC,0x10,0x44,0xFC,0x44,0x10,0x44,0x10,0x44,
0x13,0xFE,0x10,0x40,0x10,0xA0,0x1C,0xA0,0xE1,0x10,0x42,0x08,0x04,0x04,0x08,0x02,/*"��",4*/
"��",0x08,0x40,0x08,0x40,0x08,0x40,0x10,0x40,0x17,0xFC,0x30,0x40,0x30,0xE0,0x50,0xE0,
0x91,0x50,0x11,0x50,0x12,0x48,0x15,0xF4,0x18,0x42,0x10,0x40,0x10,0x40,0x10,0x40,/*"��",5*/
"��",0x00,0x28,0x00,0x24,0x3F,0xFE,0x20,0x20,0x2F,0xA4,0x20,0x24,0x2F,0xA8,0x28,0x98,
0x28,0x92,0x4F,0xAA,0x40,0x46,0x80,0x82,0x01,0x00,0x48,0x84,0x48,0x12,0x87,0xF2,/*"��",6*/
"��",0x02,0x10,0x21,0x10,0x11,0x10,0x17,0xBE,0x82,0x20,0x42,0x40,0x43,0xBC,0x12,0x84,
0x12,0x88,0x22,0x88,0xE2,0xBE,0x22,0x88,0x24,0x88,0x24,0x88,0x29,0xA8,0x10,0x10,/*"��",7*/
"Ϸ",0x00,0x20,0x00,0x28,0x00,0x24,0x7E,0x24,0x02,0x20,0x02,0x3E,0x25,0xE0,0x14,0x24,
0x08,0x24,0x08,0x28,0x14,0x28,0x12,0x10,0x22,0x32,0x40,0x4A,0x00,0x86,0x01,0x02,/*"Ϸ",8*/
"��",0x02,0x00,0x01,0x00,0x3F,0xF8,0x00,0x00,0x08,0x20,0x04,0x40,0xFF,0xFE,0x00,0x00,
0x1F,0xF0,0x10,0x10,0x10,0x10,0x1F,0xF0,0x10,0x10,0x10,0x10,0x1F,0xF0,0x10,0x10,/*"��",0*/
"��",0x00,0x20,0x00,0xF0,0x1F,0x00,0x10,0x00,0x11,0x00,0x21,0x00,0x21,0x00,0x3F,0xFC,
0x01,0x00,0x09,0x20,0x09,0x10,0x11,0x08,0x21,0x04,0x41,0x04,0x05,0x00,0x02,0x00,/*"��",1*/
"��",0x20,0x78,0x27,0xC0,0x22,0x48,0x21,0x50,0xFB,0xFC,0x21,0x50,0x22,0x48,0x2C,0x06,
0x33,0xF8,0xE2,0x48,0x22,0x48,0x23,0xF8,0x22,0x48,0x22,0x48,0xA3,0xF8,0x42,0x08,/*"��",2*/
"��",0x20,0x40,0x10,0x40,0x00,0x40,0xFE,0x80,0x20,0xFE,0x21,0x08,0x3E,0x88,0x24,0x88,
0x24,0x88,0x24,0x50,0x24,0x50,0x24,0x20,0x44,0x50,0x54,0x88,0x89,0x04,0x02,0x02,/*"��",3*/
"��",0x00,0x40,0x00,0x40,0x00,0x40,0xFE,0x40,0x11,0xFC,0x10,0x44,0x10,0x44,0x10,0x44,
0x10,0x44,0x10,0x84,0x10,0x84,0x1E,0x84,0xF1,0x04,0x41,0x04,0x02,0x28,0x04,0x10,/*"��",4*/
"��",0x10,0x40,0x24,0x44,0x42,0x48,0xFF,0x70,0x01,0x40,0x00,0x42,0x7E,0x42,0x42,0x3E,
0x42,0x00,0x7E,0x44,0x42,0x48,0x42,0x70,0x7E,0x40,0x42,0x42,0x4A,0x42,0x44,0x3E,/*"��",5*/
"��",0x00,0x40,0x40,0x40,0x27,0xFC,0x20,0x40,0x03,0xF8,0x00,0x40,0xE7,0xFE,0x20,0x00,
0x23,0xF8,0x22,0x08,0x23,0xF8,0x22,0x08,0x2B,0xF8,0x32,0x08,0x22,0x28,0x02,0x10,/*"��",6*/
"ѡ",0x00,0x40,0x22,0x40,0x12,0x40,0x13,0xF8,0x04,0x40,0x00,0x40,0xF7,0xFC,0x11,0x20,
0x11,0x20,0x11,0x20,0x12,0x24,0x12,0x24,0x14,0x1C,0x28,0x00,0x47,0xFE,0x00,0x00,/*"ѡ",7*/
"��",0x20,0x00,0x27,0xF8,0x22,0x08,0x21,0x10,0xF0,0xA0,0x20,0x40,0x21,0xB0,0x26,0x4E,
0x30,0x40,0xE3,0xF8,0x20,0x40,0x20,0x40,0x27,0xFC,0x20,0x40,0xA0,0x40,0x40,0x40,/*"��",8*/
"��",0x04,0x40,0x04,0x40,0x04,0x40,0x04,0x40,0x7F,0xFC,0x44,0x44,0x44,0x44,0x44,0x44,
0x44,0x44,0x7F,0xFC,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x7F,0xFC,0x40,0x04,/*"��",9*/
"Ŀ",0x00,0x00,0x3F,0xF8,0x20,0x08,0x20,0x08,0x20,0x08,0x3F,0xF8,0x20,0x08,0x20,0x08,
0x20,0x08,0x3F,0xF8,0x20,0x08,0x20,0x08,0x20,0x08,0x20,0x08,0x3F,0xF8,0x20,0x08,/*"Ŀ",10*/
"��",0x02,0x20,0x07,0x20,0x38,0x20,0x20,0x7E,0x20,0x42,0x20,0x84,0x3F,0x10,0x24,0x10,
0x24,0x10,0x24,0x10,0x24,0x28,0x24,0x28,0x24,0x48,0x44,0x44,0x44,0x84,0x81,0x02,/*"��",11*/
"��",0x11,0x10,0x09,0x20,0x3F,0xFC,0x20,0x04,0x4F,0xE8,0x08,0x20,0x0F,0xE0,0x00,0x00,
0x1F,0xF0,0x10,0x10,0x11,0x10,0x11,0x10,0x11,0x10,0x02,0x60,0x0C,0x18,0x70,0x04,/*"��",12*/


};
typedef struct 
{
       unsigned char Index[2];	
       char Msk[72];
}typFNT_GB24; 
//����ȡģ�����峣��С��
const typFNT_GB24 tfont24[]=
{

"��",0x00,0x00,0x00,0x04,0x00,0x00,0x06,0x00,0x20,0x06,0x3F,0xF0,0x06,0x00,0x60,0x06,
0x40,0x80,0x7F,0xE1,0x00,0x06,0x06,0x00,0x06,0x0C,0x00,0x06,0x1F,0xFC,0x0F,0x92,
0x6C,0x0E,0xC6,0x4C,0x0E,0xC4,0xCC,0x16,0x48,0x8C,0x16,0x11,0x88,0x26,0x21,0x08,
0x26,0x42,0x08,0x46,0x84,0x08,0x06,0x08,0x08,0x06,0x10,0x18,0x06,0x61,0xF8,0x06,
0x00,0x70,0x04,0x00,0x00,0x00,0x00,0x00,/*"��",0*/
"Խ",0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x80,0x02,0x00,0xE0,0x02,0x00,0x98,0x3F,
0xE0,0x88,0x02,0x00,0x84,0x02,0x0F,0xFC,0x02,0x0C,0x80,0x02,0x2C,0x80,0x7F,0xFC,
0x88,0x03,0x0C,0x98,0x13,0x0C,0x90,0x1B,0x0C,0xD0,0x1B,0xFD,0x60,0x13,0x0E,0x60,
0x13,0x0C,0x64,0x13,0x08,0xB4,0x2F,0x01,0x1C,0x23,0x02,0x0C,0x21,0xCC,0x02,0x40,
0x3F,0xFC,0x40,0x00,0x18,0x00,0x00,0x00,/*"Խ",1*/
"��",0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x18,0x00,0x00,0x18,0x00,0x1F,0xFF,0xF8,0x00,
0x10,0x00,0x00,0x10,0x00,0x03,0xFF,0xC0,0x03,0x00,0x80,0x03,0xFF,0x80,0x03,0x00,
0x80,0x03,0x00,0x80,0x03,0xFF,0x80,0x03,0x00,0x80,0x03,0xFF,0x80,0x03,0x00,0x80,
0x03,0x00,0x84,0x7F,0xFF,0xFE,0x00,0x42,0x00,0x01,0xC1,0xC0,0x03,0x00,0x70,0x04,
0x00,0x30,0x18,0x00,0x10,0x00,0x00,0x00,/*"��",2*/
"˧",0x00,0x00,0x00,0x01,0x01,0x00,0x01,0x01,0x00,0x01,0x01,0x00,0x01,0x01,0x00,0x19,
0x01,0x00,0x11,0x3F,0xF8,0x11,0x31,0x08,0x11,0x31,0x08,0x11,0x31,0x08,0x11,0x31,
0x08,0x11,0x31,0x08,0x11,0x31,0x08,0x11,0x31,0x08,0x13,0x31,0x08,0x12,0x31,0x08,
0x02,0x31,0x08,0x02,0x31,0x38,0x04,0x21,0x10,0x08,0x01,0x00,0x18,0x01,0x00,0x20,
0x01,0x00,0x40,0x01,0x00,0x00,0x00,0x00,/*"˧",0*/
};  
typedef struct 
{
       unsigned char Index[2];	
       char Msk[128];
}typFNT_GB32; 
//����ȡģ�����峣��С��
const typFNT_GB32 tfont32[]=
{
"��",0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x03,0x80,0x00,
0x00,0x03,0x00,0x00,0x00,0x06,0x00,0x00,0x00,0x04,0x00,0x00,0x02,0x04,0x00,0x80,
0x01,0xFF,0xFF,0xE0,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,
0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0xFF,0xFF,0x80,0x01,0x80,0x01,0x80,
0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,
0x01,0x80,0x01,0x80,0x01,0xFF,0xFF,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,
0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0xFF,0xFF,0x80,
0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x00,0x01,0x80,0x00,0x00,0x00,0x00,/*"��",0*/
"ǿ",0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x20,
0x00,0x21,0xFF,0xF0,0x3F,0xF1,0x80,0x60,0x00,0x21,0x80,0x60,0x00,0x21,0x80,0x60,
0x00,0x21,0x80,0x60,0x00,0x21,0xFF,0xE0,0x00,0x21,0x88,0x60,0x00,0x21,0x0E,0x00,
0x0F,0xE0,0x0C,0x00,0x08,0x20,0x0C,0x00,0x08,0x02,0x0C,0x10,0x08,0x03,0xFF,0xF8,
0x18,0x03,0x0C,0x10,0x18,0x23,0x0C,0x10,0x1F,0xF3,0x0C,0x10,0x10,0x63,0x0C,0x10,
0x00,0x63,0x0C,0x10,0x00,0x63,0xFF,0xF0,0x00,0x63,0x0C,0x10,0x00,0x62,0x0C,0x00,
0x00,0x60,0x0C,0x20,0x00,0x40,0x0C,0x30,0x00,0xC0,0x0C,0x18,0x00,0xC0,0x0C,0x7C,
0x0F,0x8F,0xFF,0x8C,0x07,0x8F,0x80,0x04,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"ǿ",1*/
"��",0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x01,0x88,0x00,
0x00,0x01,0x86,0x00,0x00,0x01,0x83,0x80,0x00,0x01,0x81,0x80,0x00,0x01,0x81,0x80,
0x00,0x01,0x80,0x30,0x3F,0xFF,0xFF,0xF8,0x00,0x01,0x80,0x00,0x00,0x01,0x80,0x00,
0x04,0x01,0x80,0x40,0x03,0x01,0xC0,0x40,0x01,0xC1,0xC0,0xE0,0x00,0xE1,0xA1,0xC0,
0x00,0xE1,0xA3,0x00,0x00,0x41,0xB4,0x00,0x00,0x01,0x98,0x00,0x00,0x07,0x98,0x00,
0x00,0x19,0x8C,0x00,0x00,0x71,0x8E,0x00,0x01,0xC1,0x87,0x00,0x07,0x01,0x83,0x80,
0x1E,0x01,0x81,0xC0,0x3C,0x01,0x80,0xF0,0x10,0x01,0x80,0x7E,0x10,0x03,0x00,0x30,
0x00,0x1F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x00,/*"��",2*/
"��",0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x7F,0xFF,0x00,
0x00,0x60,0x06,0x00,0x00,0x60,0x06,0x00,0x00,0x60,0x06,0x00,0x00,0x7F,0xFE,0x00,
0x00,0x60,0x06,0x00,0x00,0x60,0x06,0x00,0x00,0x60,0x06,0x00,0x00,0x60,0x06,0x00,
0x00,0x7F,0xFE,0x00,0x00,0x60,0x06,0x00,0x00,0x40,0x04,0x00,0x00,0x00,0x00,0x30,
0x3F,0xFF,0xFF,0xF8,0x00,0x01,0x80,0x00,0x00,0xC1,0x80,0x00,0x00,0xE1,0x80,0x00,
0x00,0xC1,0x80,0xC0,0x00,0xC1,0xFF,0xE0,0x01,0x81,0x80,0x00,0x01,0xC1,0x80,0x00,
0x01,0xA1,0x80,0x00,0x03,0x19,0x80,0x00,0x06,0x0D,0x80,0x00,0x06,0x07,0x80,0x00,
0x0C,0x01,0xFF,0xFC,0x10,0x00,0x3F,0xF0,0x20,0x00,0x00,0x70,0x00,0x00,0x00,0x00,/*"��",3*/
"��",0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x02,0x00,
0x0F,0xFE,0x07,0x00,0x00,0x04,0x07,0x00,0x00,0x04,0x06,0x00,0x00,0x04,0x06,0x00,
0x00,0x04,0x06,0x00,0x00,0x04,0x04,0x00,0x00,0x04,0x0C,0x00,0x07,0xFC,0x0C,0x00,
0x0C,0x04,0x08,0x00,0x0C,0x00,0x08,0x00,0x0C,0x00,0x18,0x00,0x0C,0x00,0x18,0x00,
0x08,0x00,0x10,0x00,0x1F,0xFC,0x30,0x00,0x08,0x0C,0x20,0x00,0x00,0x0C,0x20,0x00,
0x00,0x0C,0x20,0x80,0x00,0x0C,0x40,0x40,0x00,0x08,0x40,0x60,0x00,0x08,0xC0,0x30,
0x00,0x18,0x80,0x18,0x00,0x19,0x80,0x18,0x00,0x19,0x07,0xFC,0x02,0x1B,0xFE,0x0C,
0x01,0xF3,0xE0,0x0C,0x00,0xF1,0x00,0x08,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,/*"��",4*/
"��",0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0xC0,0x00,0x40,
0x00,0xC0,0x1F,0xE0,0x00,0x42,0x18,0xC0,0x1F,0xFF,0x18,0xC0,0x04,0x10,0x10,0xC0,
0x06,0x1C,0x10,0xC0,0x03,0x18,0x10,0xC0,0x03,0x10,0x30,0xC0,0x01,0x22,0x30,0xE4,
0x3F,0xFF,0xA0,0x7E,0x00,0xC0,0x40,0x00,0x01,0x80,0x80,0x20,0x03,0x83,0xFF,0xF0,
0x06,0x87,0x10,0x30,0x0C,0xCC,0x10,0x60,0x10,0xB8,0x10,0x60,0x01,0x30,0x08,0x40,
0x02,0x30,0x08,0xC0,0x04,0x3C,0x0D,0x80,0x18,0x73,0x05,0x80,0x20,0xD9,0x87,0x00,
0x01,0x99,0x87,0x00,0x02,0x18,0x8D,0x80,0x0C,0x18,0x18,0xC0,0x30,0x18,0x30,0x70,
0x01,0xF0,0x40,0x3E,0x00,0x71,0x80,0x18,0x00,0x46,0x00,0x00,0x00,0x00,0x00,0x00,/*"��",5*/
"��",0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0xC0,0x00,0x00,
0x01,0x80,0x00,0x00,0x01,0x80,0x00,0x18,0x01,0x87,0xFF,0xFC,0x01,0x80,0x18,0x00,
0x01,0x90,0x30,0x00,0x3F,0xF8,0x30,0x00,0x01,0x80,0x30,0x00,0x01,0x80,0x60,0x00,
0x01,0x80,0x60,0x00,0x01,0x80,0xC0,0x00,0x01,0x98,0xC0,0x00,0x01,0xA1,0x80,0x30,
0x01,0xC1,0xFF,0xF8,0x03,0x83,0xC0,0x30,0x0F,0x82,0xC0,0x30,0x39,0x84,0xC0,0x30,
0x11,0x8C,0xC0,0x30,0x01,0x98,0xC0,0x30,0x01,0x90,0xC0,0x30,0x01,0x80,0xC0,0x30,
0x01,0x80,0xC0,0x30,0x01,0x80,0xC0,0x30,0x01,0x80,0xC0,0x30,0x01,0x80,0xFF,0xF0,
0x1F,0x80,0xC0,0x30,0x07,0x00,0xC0,0x30,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"��",6*/
"��",0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0xC0,0x00,0x30,
0x00,0x60,0x00,0xF8,0x00,0x63,0x1F,0x80,0x1F,0xFF,0x98,0x00,0x04,0x08,0x18,0x00,
0x06,0x0E,0x18,0x00,0x03,0x0C,0x18,0x00,0x03,0x08,0x18,0x00,0x01,0x10,0x18,0x00,
0x01,0x11,0x98,0x18,0x3F,0xFF,0xDF,0xFC,0x00,0x60,0x18,0xC0,0x00,0x60,0x18,0xC0,
0x00,0x60,0x18,0xC0,0x00,0x63,0x10,0xC0,0x1F,0xFF,0x90,0xC0,0x00,0x60,0x10,0xC0,
0x00,0x60,0x10,0xC0,0x06,0x68,0x30,0xC0,0x06,0x66,0x30,0xC0,0x0C,0x63,0x20,0xC0,
0x0C,0x63,0x60,0xC0,0x08,0x61,0x60,0xC0,0x10,0x60,0xC0,0xC0,0x24,0x60,0x80,0xC0,
0x43,0xE1,0x00,0xC0,0x00,0xC2,0x00,0xC0,0x00,0x84,0x00,0x80,0x00,0x00,0x00,0x00,/*"��",7*/
};
#endif