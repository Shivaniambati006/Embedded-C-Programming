// Extract the middle 4 bits of num = 202
#include<stdio.h>

int main(){
	
	unsigned char num = 202;
	unsigned char mask = 0x3c;
	
	printf("%d\n", (num & mask) >> 2);
	
}
