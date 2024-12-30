/*
 * Duck Number : Output : A Duck number is any number that contains the digit zero but doesn't start with it. 
 			: 102 is a Duck number because it contains the digit zero and doesn't start with it.

 * Input : 101150
 * Output : 101150 is a Duck Number.
 *
*/

#include<stdio.h>
void main() {

	long num = 0, rev = 0, rem = 0;
	printf("Enter Number : ");
	scanf("%ld",&num);

	long temp = num;

	while(temp != 0) {

		rem = temp % 10;

		if(rem == 0) {
		
			printf("%ld is a Duck Number.\n",num);
			break;

		}
		
		temp /= 10;
	}

	if(rem != 0) 
		printf("%ld is not a Duck Number.\n",num);
}
