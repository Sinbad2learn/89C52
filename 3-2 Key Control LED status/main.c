#include <regx52.h>

void Delay1ms(unsigned int t_ms)		//@12.000MHz
{
	unsigned char i, j;

	unsigned int t;
	for(t = 0; t <= t_ms; t++){
		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
	}
}


void main(){
	while(1){
		if(P3_1 == 0){
			Delay1ms(20);
			while(P3_1 == 0);
			Delay1ms(20);
			P2_0 = ~P2_0;
		}
	}
}