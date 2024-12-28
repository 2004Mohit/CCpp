/*
 * Factorial of Number : 
 *
 * Input : 5
 * Output :
 * Factorial of 5 is 120.
 *
*/

#include<stdio.h>
void main() {

	long num = 0, fact = 1;
	printf("Enter Number : ");
	scanf("%ld",&num);

	long itr = num;
	while(itr > 0) {

		fact *= itr;
		itr--;
	}
	
	printf("Factorial of %ld is %ld.\n",num,fact);
}
