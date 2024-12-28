/*
 * Prime Number : Prime Numbers are Numbers which have only factors. 
 *
 * Input : 25, 7
 * Output :
 * 25 is not a Prime Number. (factors of 25 are 1, 5, 25)
 * 7 is Prime Number. (factors of 7 are 1, 7)
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
		printf("%d is Prime Number.\n",num);
	else
		printf("%d is not a Prime Number.\n",num);
}
