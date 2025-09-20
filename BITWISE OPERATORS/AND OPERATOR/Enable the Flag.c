//You have a set of feature flags represented by num = 13 (binary 1101).
//Check if the 2nd and 3rd features are enabled.
#include<stdio.h>

int main(){
	
	unsigned char num = 13;
	unsigned char mask = (1 << 2) | (1 << 3);
	
	if(num & mask){
		printf("The Flag is enabled");
	}
	else{
		printf("The Flag is not enabled");
	}
	
}
