//Write code to check whether a number is even or odd using bitwise AND.
#include<stdio.h>
int main(){
	int num;
	
	printf("Enter the number:- ");
	scanf("%d", &num);
	
	if((num & 1) == 0){
		printf("The numbetr is even", num);
	}
	else{
		printf("The numbetr is 0dd",num);
	}
	return 0;
}
