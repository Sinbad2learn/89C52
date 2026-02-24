#include <regx52.h>
#include "LCD1602.h"


void main(){
	LCD_Init();
	LCD_ShowChar(1,1,'A');
	LCD_ShowString(1,3,"LOVE");
	LCD_ShowNum(1,8,666,3);
	LCD_ShowSignedNum(2,1,666,3);
	LCD_ShowHexNum(2,6,0xF,1);
	LCD_ShowBinNum(2,8,0xF,4);
	while(1){
		
	
	
	}


}