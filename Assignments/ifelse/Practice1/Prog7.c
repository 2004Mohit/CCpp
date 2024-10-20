#include<stdio.h>

void main() {

	int num1;
	int num2;

	printf("Enter Num1 : ");
	scanf("%d",&num1);

	printf("Enter Num2 : ");
	scanf("%d",&num2);
	
	if(num1 == num2) {
		
		printf("Numbers are Equal.\n");
	} else if(num2 < num1) {
	
		printf("%d is maximum between %d & %d.\n",num1,num1,num2);
	} else if(num1 < num2) {
	
		printf("%d is maximum between %d & %d.\n",num2,num1,num2);
	} else {
	
		printf("Enter Valid Integer !!\n");
	}
}
