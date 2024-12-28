/*
 * Palindrome : Palindrome is a number which is equal to its Reverse form.
 *
 * Input : 1225221
 * Output :
 * 1225221 is a Palindrome.
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

	if(num == rev)
		printf("%ld is a Palindrome.\n",num);
	else
		printf("%ld is not a Palindrome.\n",num);
}
