#include <regx52.h>
#include "Delay.h"
#include "NumLED.h"

void main(){
	while(1){
		NumLED(8,5);
		Delay(1);
		NumLED(7,2);
		Delay(1);
		NumLED(6,0);
		Delay(1);
		NumLED(5,1);
		Delay(1);
		NumLED(4,3);
		Delay(1);
		NumLED(3,1);
		Delay(1);
		NumLED(2,4);
		Delay(1);
	}
}