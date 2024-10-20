#include<stdio.h>

void main() {

	int Age;

	printf("Enter Age : ");
	scanf("%d",&Age);

	if(Age < 18) {
		
		printf("Not Eligible for Voting.\n");
	} else {
	
		printf("Eligible for Voting.\n");
	}
}
