//Given num = 100, check if the 6th bit is set.
#include<stdio.h>
int main(){
	
	unsigned char num = 100;
	unsigned char mask = (1 << 6);
	
	if(num & mask){
		printf("The 6th bit is set");
	}
	else{
		printf("The 6th bit is set");
	}
	
}
