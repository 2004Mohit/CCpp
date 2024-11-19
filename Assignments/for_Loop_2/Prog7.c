/*
 * Ques : 7
 * Print Cube of Odd Numbers from Range.
 */

#include<stdio.h>
void main() {

	int start, end, ans = 0;

	printf("Enter start : ");
	scanf("%d",&start);

	printf("Enter End : ");
	scanf("%d",&end);

	printf("Output : ");
	for(int i = start; i <= end; i++) {
		
		if(i%2 != 0) {

			ans = i*i*i;
			printf("%d ",ans);
		}
	}
	printf("\n");
}
