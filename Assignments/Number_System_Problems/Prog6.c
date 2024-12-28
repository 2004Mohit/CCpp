/*
 * Reverse of Given Number : 
 *
 * Input : 98567
 * Output :
 * Reverse of 98567 is 76589.
 *
*/

#include<stdio.h>
void main() {

	long num = 0, rev = 0, rem = 0;
	printf("Enter Number : ");
	scanf("%ld",&num);

	long itr = num;
	while(itr > 0) {

		rem = itr%10;
		rev = rev*10 + rem;
		itr /= 10;
	}
	
	printf("Reverse of %ld is %ld.\n",num,rev);
}
