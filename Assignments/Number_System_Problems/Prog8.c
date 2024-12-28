/*
 * Perfect Number : A perfect number is a positive integer that is equal to the sum of its proper divisors, excluding itself.
 *
 * 		  : The simplest way to understand this is by looking at the smallest perfect number, which is 6. 
 * 		    The divisors of 6 (excluding itself) are 1, 2, and 3, and if you add these divisors together 
 * 		    (1 + 2 + 3), the sum is 6.
 *
 * Input : 6
 * Output :
 * 6 is a Perfect Number. (Also The Smallest Perfect Number)
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
	
	if(num == sum)
		printf("%d is a Perfect Number.\n",num);
	else
		printf("%d is not a Perfect Number.\n",num);
}
