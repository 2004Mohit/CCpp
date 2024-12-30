/*
 * Deficient Number : A deficient number is a positive integer that is greater than the sum of its proper divisors, excluding itself.
 		    : In other words, the sum of the proper divisors of a deficient number is less than the number itself.
		    : Let's take the number 8 : The proper divisors of 8 are 1, 2, and 4. The sum of these proper divisors is 1 + 2 + 4 = 7.
		      As 7 is less than 8 it is a deficient number.
 *
 * Input : 25
 * Output : 25 is a Deficient Number.
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

	if(sum < num )
		printf("%d is a Deficient Number.\n",num);
	else
		printf("%d is not a Deficient Number.\n",num);
}
