#include<stdio.h>

void main() {

	int num;

	printf("Enter Number : ");
	scanf("%d",&num);

	if(num > 0) {
		
		printf("%d is Positive.\n",num);
	} else if(num < 0) {
	
		printf("%d is Negative.\n",num);
	} else if(num == 0){

		printf("The Number %d is considered Neutral.\n",num);
	} else {
	
		printf("Enter Valid Integer !!\n");
	}
}
