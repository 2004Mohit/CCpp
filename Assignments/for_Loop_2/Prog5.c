/*
 * Ques : 5
 * Print Product of 'EVEN' Numbers in Range.
 */

#include<stdio.h>
void main() {

	int start, end = 0;
        int mul = 1;

	printf("Enter start : ");
	scanf("%d",&start);

	printf("Enter End : ");
	scanf("%d",&end);

	for(int i = start; i <= end; i++) {
		
		if(i%2 == 0)
			mul = mul*i;
	}

	printf("Product : %d\n",mul);

}
