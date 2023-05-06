#include "TLC1543.h"

//==================================================

//函数：uint ReadPort(uchar port)

//描述：采样端口并转换

//参数：uchar port       //采样端口A0-A10

//返回：uint                 //转换结果(十位)
//==================================================

//读取ADC结果函数
unsigned int read_adc(uchar ADDR)
{
   	unsigned char i;
	unsigned int temp=0;
	ADDR <<= 4;//4有效地址左对齐

  	CLK = 0;
  	CS=1; 
  	CS = 0;  
  	for (i=0;i<8;i++)
  		{	
		  	temp <<= 1;
			ADD=(bit)(ADDR&0X80);
		  	CLK = 1;
			SDO=1;
			temp =temp^SDO;
			CLK = 0;
		    ADDR <<= 1;
  		}

		ADD=(bit)(ADDR&0X80);
	  	CLK = 1;
		SDO=1;
		CLK = 0;
	    ADDR <<= 1;

		ADD=(bit)(ADDR&0X80);
	  	CLK = 1;
		SDO=1;
		CLK = 0;
	    ADDR <<= 1;

  	CS=1;
  	return(temp);
}
