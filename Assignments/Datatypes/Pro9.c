#include<stdio.h>

void main() {

	int num1;

	printf("Enter Number : ");
	scanf("%d",&num1);

	if(num1 < 10) {

		printf("Number is less than 10.\n");
	} else if(10 < num1 && num1 < 20) {

		printf("Number is Greater than 10 but less than 20.\n");
	} else {
	
		printf("Happy Coding !\n");
	}
}
