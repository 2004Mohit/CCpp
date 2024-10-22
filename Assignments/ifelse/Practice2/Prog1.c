#include<stdio.h>

void main() {

	int num;

	printf("Enter Number : ");
	scanf("%d",&num);

	if((num >= 1) && (num <= 1000)) {
	
		printf("%d is in the range 1 To 1000.\n",num);
	} else {
	
		printf("%d is not in the range 1 To 1000.\n",num);
	}
}
