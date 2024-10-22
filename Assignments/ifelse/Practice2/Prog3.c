#include<stdio.h>

void main() {

	int year;

	printf("Enter Year : ");
	scanf("%d",&year);

	int last2digits = year%100;

	if((last2digits == 00) && (year%400 == 0)) {
	
		printf("%d is a Leap Year\n",year);
	} else if(year%4 == 0) {
	
		printf("%d is a Leap Year\n",year);
	} else {
	
		printf("%d is not a Leap Year\n",year);
	}
}
