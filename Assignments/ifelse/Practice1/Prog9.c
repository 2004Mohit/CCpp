#include<stdio.h>

void main() {

	int marks;

	printf("Enter Your Marks : ");
	scanf("%d",&marks);

	if(marks < 35) {
		
		printf("All The Best for Your Next Try !!\n");
	} else if((marks >= 35) && (marks <= 50)) {
	
		printf("Grade : E\n");
	} else if((marks > 50) && (marks < 60)) {
	
		printf("Grade : D\n");
	} else if((marks >= 60) && (marks <= 75)) {
	
		printf("Grade : C\n");
	} else if((marks > 75) && (marks <= 85)) {
	
		printf("Grade : B\n");
	} else if((marks > 85) && (marks <= 100)) {
	
		printf("Grade : A\n");	
	} else {
	
		printf("Enter Marks Only !!\n");
	}
}
