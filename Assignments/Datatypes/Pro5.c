#include<stdio.h>

void main() {

	int num1 = 10;
	int num2 = 20;

	printf("Before Swapping : \n");
	printf("num1 : %d\n",num1);
	printf("num2 : %d\n\n",num2);
	
	int temp = num2;
	num2 = num1;
	num1 = temp;

	printf("After Swapping : \n");
	printf("num1 : %d\n",num1);
	printf("num2 : %d\n",num2);
}
