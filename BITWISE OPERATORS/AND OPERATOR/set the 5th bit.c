//Given num = 73, set the 5th bit (make it 1).
#include<stdio.h>

int main(){
	
	unsigned char num = 73;
	unsigned char mask = (1 << 5);
	
	unsigned char result = num | mask;
	
	printf("The result is :- %d\n", result);
}
