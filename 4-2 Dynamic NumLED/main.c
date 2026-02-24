#include <regx52.h>

unsigned char NUMBER[] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F};
	
void disp(unsigned char loc, num);

void Delay1ms(unsigned int t_ms);

void main(){
	while(1){
		disp(8,5);
		Delay1ms(1);
		disp(7,2);
		Delay1ms(1);
		disp(6,0);
		Delay1ms(1);
		disp(5,1);
		Delay1ms(1);
		disp(4,3);
		Delay1ms(1);
		disp(3,1);
		Delay1ms(1);
		disp(2,4);
		Delay1ms(1);
	}

}
//
void disp(unsigned char loc, num){
	switch(loc){
		case 1: P2_2 = 0; P2_3 = 0; P2_4 = 0; break;
		case 2: P2_2 = 1; P2_3 = 0; P2_4 = 0; break;
		case 3: P2_2 = 0; P2_3 = 1; P2_4 = 0; break;
		case 4: P2_2 = 1; P2_3 = 1; P2_4 = 0; break;
		case 5: P2_2 = 0; P2_3 = 0; P2_4 = 1; break;
		case 6: P2_2 = 1; P2_3 = 0; P2_4 = 1; break;
		case 7: P2_2 = 0; P2_3 = 1; P2_4 = 1; break;
		case 8: P2_2 = 1; P2_3 = 1; P2_4 = 1; break;
	}
	P0 = NUMBER[num];
	Delay1ms(1);
	P0 = 0x00;
}
//
void Delay1ms(unsigned int t_ms)		//@12.000MHz
{
	unsigned char i, j;

	unsigned int t;
	for(t = 0; t < t_ms; t++){
		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
		}
}
