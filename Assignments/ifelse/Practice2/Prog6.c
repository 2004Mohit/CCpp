#include<stdio.h>

void main() {

	int percentage;

	printf("Enter Your Marks : ");
	scanf("%d",&percentage);

	if(percentage > 85) {

		printf("Suggested Career Field : Medical\n");
	
	} else if((percentage > 75) && (percentage <= 85)) {

		printf("Suggested Career Field : Engineering\n");

	} else if((percentage >= 65) && (percentage <= 75)) {

		printf("Suggested Career Field : Pharmacy or B.Sc\n");
	
	} else if((percentage > 35) && (percentage < 65)) {

		printf("Suggested Career Field : As You Wish\n");

	} else {
	
		printf("Either You are Fail or Input is Invalid !!\n");

	}

}
