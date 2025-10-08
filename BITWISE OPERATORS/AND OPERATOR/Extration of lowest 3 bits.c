//Extract the lowest 3 bits of num = 77.
#include<stdio.h>

int main(){
	
	unsigned char num = 77;
	unsigned char mask = 0x07;
	unsigned char result = num & 0x07;
	
	printf("the lowest 3 bits of num is :- %d\n", result);
}
