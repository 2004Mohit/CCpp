#include<stdio.h>

void main() {

	int percentage;

	printf("Enter Your Percentage : ");
	scanf("%d",&percentage);

	if(percentage >= 75) {

		printf("Passed : First Class with Distinction.\n");
	
	} else if((percentage >= 60) && (percentage < 75)) {

		printf("Passed : First Class.\n");

	} else if((percentage >= 50) && (percentage < 60)) {

		printf("Passed : Second Class.\n");
	
	} else if((percentage >= 35) && (percentage < 50)) {

		printf("Pass.\n");

	} else if((percentage >= 0) && (percentage < 35)) {

		printf("Fail.\n");

	} else {
	
		printf("Input is Invalid !!\n");

	}

}
