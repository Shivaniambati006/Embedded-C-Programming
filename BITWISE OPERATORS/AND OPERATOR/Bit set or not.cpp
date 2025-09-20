#include <stdio.h>

int main(){
	
	unsigned char num = 73;
	unsigned char mask = (num << 6);
	
	if(num & mask){
		printf("THE BIT IS SET");
    }
    else {
		printf("THE BIT IS NOT SET");
	}
}
