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

	int num = 0, factSum = 0, rem = 0;
	printf("Enter Number : ");
	scanf("%d",&num);

	int itr = num;

	while(itr != 0) {

		rem = itr % 10;

		int i = 1;

		int digFact = 1;

		while(i <= rem) {

			digFact *= i;
			i++;
		}

		factSum += digFact;
		itr /= 10;
	}

	if(num == factSum)
		printf("%d is a Strong Number.\n",num);
	else
		printf("%d is not a Strong Number.\n",num);
}
