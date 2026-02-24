#include <REGX52.H>
#include <intrins.h>

void Delay125ms()		//@12.000MHz
{
	unsigned char i, j;

	i = 244;
	j = 45;
	do
	{
		while (--j);
	} while (--i);
}


void main(){
	while(1){
		P2 = 0xFE;
		Delay125ms();
		P2 = 0xFD;
		Delay125ms();
		P2 = 0xFB;
		Delay125ms();
		P2 = 0xF7;
		Delay125ms();
		P2 = 0xEF;
		Delay125ms();
		P2 = 0xDF;
		Delay125ms();
		P2 = 0xBF;
		Delay125ms();
		P2 = 0x7F;
		Delay125ms();
	}

}