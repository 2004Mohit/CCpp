/*
 * Composite Number : Composite Numbers are Numbers which have more than two factors (i.e. more than itself 1 & itself). 
 *		    : Composite Numbers are the exact opposite of Prime Numbers.
 * Input : 25, 7
 * Output :
 * 25 is a Composite Number. (factors of 25 are 1, 5, 25)
 * 7 is not a Composite Number. (factors of 7 are 1, 7)
*/

#include<stdio.h>
void main() {

	int num = 0, count = 0;
	printf("Enter Number : ");
	scanf("%d",&num);

	int itr = 1;
	while(itr <= num) {

		if(num%itr == 0) {
		
			count++;
		}

		itr++;
	}

	if(count == 2)
		printf("%d is not Composite Number.\n",num);
	else
		printf("%d is a Composite Number.\n",num);
}
