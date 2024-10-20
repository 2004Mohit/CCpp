#include<stdio.h>

void main() {

	int num;

	printf("Enter Number : ");
	scanf("%d",&num);

	if((num%3 == 0) && (num%7 == 0)) {
		
		printf("%d is Divisible by 3 and 7.\n",num);
	} else {
	
		printf("%d is not Divisible by 3 and 7.\n",num);
	}
}
