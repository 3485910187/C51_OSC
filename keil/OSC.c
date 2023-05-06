#include <OSC.h>

// 定义采样数据缓冲区
xdata unsigned int sample_buffer[SAMPLE_SIZE];
unsigned int max_value = 0;        //采样数据的最大值，用于计算波形的振幅
unsigned int min_value = 0xFFFF;   //采样数据的最小值，用于计算波形的振幅

// 显示波形的函数
void display_waveform(unsigned int *dat) {
    unsigned int i,j;
		unsigned int mid_value,voltage;
		max_value = 0;                     //采样数据的最大值，用于计算波形的振幅
		min_value = 0xFFFF;                //采样数据的最小值，用于计算波形的振幅
    // 计算最大值和最小值
    for (i = 0; i < SAMPLE_SIZE; i++) {
        if (dat[i] > max_value) {
            max_value = dat[i];
        }
        if (dat[i] < min_value) {
            min_value = dat[i];
        }
    }
		
		//计算中间值
		mid_value = (max_value - min_value)/2;
		mid_value = mid_value*54/255;
		
		//清除显示
	 SelectScreen(0);
	 for(i=0;i<7;i++)	 		//页
	 {
		 SetLine(i);
		 SetColumn(0);
		 for(j=0;j<64;j++)	//列
		 {WriteByte(0x00);} //写
	 }
	 
		//显示区方框
		draw_line(0,1,126,1,1);
		draw_line(126,1,126,55,1);
		draw_line(126,55,0,55,1);
		draw_line(0,55,0,1,1);	
		
		//显示区网格
		for(i=2;i<55;i+=10)
		{
			for(j=1;j<126;j+=10)
			{
				Display_pixel(j,i,1);
			}
		}
		
		//波形绘制
		for(i=0;i<SAMPLE_SIZE-1;i++)
		{
			draw_line(i,mid_value+29-(dat[i]*54/255),i+1,mid_value+29-(dat[i+1]*54/255),1); 
		}
		
		//最大值
		voltage = 2*max_value*0.19607;		
		Display_6x8(7,0,10); // MAX
		Display_6x8(7,6,11);
		Display_6x8(7,12,12);
		Display_1x8(7,18,0x48); //:号
		Display_6x8(7,20,voltage/10);	
		Display_pixel(26,64-2,1);			
		Display_6x8(7,27,voltage%10);			
		Display_6x8(7,33,17);			
		
		//最小值
		voltage = 2*min_value*0.19607;		
		Display_6x8(7,45,10); // MIN
		Display_6x8(7,51,13);
		Display_6x8(7,57,14);
		Display_1x8(7,63,0x48); //:号
		Display_6x8(7,65,voltage/10);	
		Display_pixel(71,64-2,1);			
		Display_6x8(7,72,voltage%10);			
		Display_6x8(7,78,17);		
		
		//频率
		Display_6x8(7,89,1);	
		Display_6x8(7,95,0);	
		Display_6x8(7,101,0);	
		Display_6x8(7,107,15);	
		Display_6x8(7,113,16);			
		
}
