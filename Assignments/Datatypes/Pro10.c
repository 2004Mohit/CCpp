#include<stdio.h>

void main() {

	int num1;

	printf("Enter Number : ");
	scanf("%d",&num1);

	if(num1%3 == 0) {
		printf("Number is divisible by 3.\n");
	} else {
		printf("Number is not divisible by 3.\n");
	}
}
