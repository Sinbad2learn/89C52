#include <regx52.h>

void Delay1ms(unsigned int t_ms)		//@12.000MHz
{
	unsigned char i, j;

	unsigned int t;
	for(t = 0; t <= t_ms; t++){
		i = 12;
		j = 169;
		do
		{
			while (--j);
		} while (--i);
	}
}


void main(){
	unsigned char num = 0x00;
	while(1){
		if(P3_1 == 0){
			Delay1ms(20);
			while(P3_1 == 0);
			Delay1ms(20);
			if(num == 0x00 || num == 0x80){
				num = 0x01;
			}
			else{
				num = num<<0x01;
			}
			P2 = ~num;
		}
				if(P3_0 == 0){
			Delay1ms(20);
			while(P3_0 == 0);
			Delay1ms(20);
			if(num == 0x00 || num == 0x01){
				num = 0x80;
			}
			else{
				num = num>>0x01;
			}
			P2 = ~num;
		}
	}
}