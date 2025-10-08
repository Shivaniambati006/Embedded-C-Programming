//Given num = 45 (binary 00101101), check if the 0th bit is set.
#include<stdio.h>
int main(){
	
	unsigned char num = 45;
	unsigned char mask = (1 << 0);
	
	if(num & mask){
		printf("The oth bit is set");
	}
	else{
		printf("The oth bit is set");
	}
	
}
