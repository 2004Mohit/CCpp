/*
 * Strong Number : A Strong number is a number such that the sum of the factorials of its digits is equal to the number itself.
 *
 * Input : 145
 * Output :
 * 145 is a Strong Number.
 * (i.e. Sum of factorial of each digit of number 1, 4, 5 : 1 + 24 + 120 : 145)
*/

#include<stdio.h>
void main() {

	long num = 0, digSum = 0, factSum = 0, rem = 0;
	printf("Enter Number : ");
	scanf("%ld",&num);

	long itr = num;

	while(itr > 0) {

		rem = itr % 10;

		while(rem > 0) {

			digSum += rem;
			rem--;
		}

		factSum += digSum;
		itr /= 10;
	}

	printf("sum of Factorial of %ld is %ld.\n",num,factSum);
}
