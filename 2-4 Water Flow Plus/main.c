#include <regx52.h>

void Delay1ms(unsigned int t_ms)		//@12.000MHz
{
	unsigned char i, j;
	unsigned int t=0;
	for(t=0; t<t_ms; t++){
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
	P2 = 0xFE;
		Delay1ms(125);
		P2 = 0xFD;
		Delay1ms(500);
		P2 = 0xFB;
		Delay1ms(125);
		P2 = 0xF7;
		Delay1ms(500);
		P2 = 0xEF;
		Delay1ms(125);
		P2 = 0xDF;
		Delay1ms(500);
		P2 = 0xBF;
		Delay1ms(125);
		P2 = 0x7F;
		Delay1ms(500);
	}
}