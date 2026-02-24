#include <regx52.h>

unsigned char NUMBER[] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F};
	
void disp(unsigned char loc, num);

void Delay1s(unsigned int t_s);

void main(){
	while(1){
		disp(1,0);
		Delay1s(1);
		disp(2,1);
		Delay1s(1);
		disp(3,2);
		Delay1s(1);
		disp(4,3);
		Delay1s(1);
		disp(5,4);
		Delay1s(1);
		disp(6,5);
		Delay1s(1);
		disp(7,6);
		Delay1s(1);
		disp(8,7);
		Delay1s(1);
		disp(1,8);
		Delay1s(1);
		disp(2,9);
		Delay1s(1);
	}

}

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
}

void Delay1s(unsigned int t_s)		//@12.000MHz
{
	unsigned char i, j, k;
	unsigned int t;
	for(t = 0; t < t_s; t++){
		i = 8;
		j = 154;
		k = 122;
		do
		{
			do
			{
				while (--k);
			} while (--j);
		} while (--i);
		}
}
