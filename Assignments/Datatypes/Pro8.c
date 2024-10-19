#include<stdio.h>

void main() {

	int num1;

	printf("Enter Number : ");
	scanf("%d",&num1);

	if(num1%2 == 0) {
		printf("Number is Even\n");
	} else {
		printf("Number is Odd\n");
	}
}
