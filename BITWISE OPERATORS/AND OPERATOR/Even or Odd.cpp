// Determine if the num = 87 is odd or even
#include<stdio.h>

int main(){
	
	unsigned char num = 22;
	
	if( (num & 1) == 0){
		printf("Even");
	}
	else{
		printf("Odd");
	}
}
