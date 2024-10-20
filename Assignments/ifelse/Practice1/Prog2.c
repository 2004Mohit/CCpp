#include<stdio.h>

void main() {

	int num;

	printf("Enter Number : ");
	scanf("%d",&num);

	if((num%5 == 0) || (num%10 == 0)) {
		
		printf("Number is Divisible.\n");
	} else {
	
		printf("Number is not Divisible.\n");
	}
}
