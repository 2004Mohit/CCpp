/*
 * Abundant Number : An abundant number is a positive integer that is smaller than the sum of its proper divisors, excluding itself. 
 		   : In other words, the sum of the proper divisors of an abundant number is greater than the number itself.
		   : let's consider the number 12: The proper divisors of 12 are 1, 2, 3, 4, and 6.
		     The sum of these proper divisors is 1 + 2 + 3 + 4 + 6 = 16.
		     Since 16 is greater than 12, 12 is an abundant number.
 *
 * Input : 25
 * Output : 25 is not an Abundant Number.
 *
*/

#include<stdio.h>
void main() {

	int num = 0, sum = 0;
	printf("Enter Number : ");
	scanf("%d",&num);

	int itr = 1;
	while(itr < num) {

		if(num%itr == 0) {
		
			sum += itr;
		}

		itr++;
	}

	if(sum > num )
		printf("%d is an Abundant Number.\n",num);
	else
		printf("%d is not an Abundant Number.\n",num);
}
