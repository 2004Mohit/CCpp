#include<stdio.h>

void main() {

	int num1;
	int num2;
	int num3;
	int checktriplets1;
	int checktriplets2;

	printf("Enter Number 1 : ");
	scanf("%d",&num1);

	printf("Enter Number 2 : ");
	scanf("%d",&num2);

	printf("Enter Number 3 : ");
	scanf("%d",&num3);

	checktriplets1 = (num1 * num1) + (num2 * num2);
	checktriplets2 = num3 * num3;

	if(checktriplets1 == checktriplets2) {
	
		printf("It is a Pythagorean Triplet.\n");

	} else {
	
		printf("Not a Pythagorean Triplet.\n");
	
	}
}
