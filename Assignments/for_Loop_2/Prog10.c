/*
 * Ques : 10
 * Print Number is Composite or Not.
 * Composite Number : Number who has more than 2 Factors.
 */

#include<stdio.h>
void main() {

	int num, count = 0;

	printf("Enter Number : ");
	scanf("%d",&num);

	for(int i = 1; i < num; i++){

		if(num%i == 0)
			count++;
	}

	if(count > 1){
		printf("%d is Composite.",num);
	}else{
		printf("%d is not Composite.",num);
	}
	printf("\n");
}
