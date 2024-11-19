/*
 * Ques : 4
 * Print Total Sum of Numbers in Range.
 */

#include<stdio.h>
void main() {

	int start, end, sum = 0;

	printf("Enter start : ");
	scanf("%d",&start);

	printf("Enter End : ");
	scanf("%d",&end);

	for(int i = start; i <= end; i++) {

		sum = sum + i;
	}

	printf("Total Sum : %d\n",sum);

}
