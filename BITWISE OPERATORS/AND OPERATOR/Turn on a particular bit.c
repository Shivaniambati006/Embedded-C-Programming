// Turn on the 3rd bit of num = 255
#include<stdio.h>

int main(){
	
	unsigned char num = 255;
	unsigned char mask = ~(1 << 5);
	
	unsigned char result = num | mask;
	
	printf("The result is :- %d\n", result);
}
