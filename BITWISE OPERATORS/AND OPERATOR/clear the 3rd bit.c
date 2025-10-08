//Toggle the 1st bit of num = 15.
#include<stdio.h>

int main(){
	
	unsigned char num = 15;
	unsigned char mask = (1 << 1);
	
	unsigned char result = num ^ mask;
	
	printf("The result is :- %d\n", result);
}
