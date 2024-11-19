/*
 * Ques : 1
 * Print Even Numbers betn Range from User.
 */

#include<stdio.h>
void main() {

	int start, end = 0;

	printf("Start : ");
	scanf("%d",&start);

	printf("End : ");
	scanf("%d",&end);

	printf("Even Numbers between Your Entered Range are : \n");
	for(int i = start; i <= end; i++) {
	
		if(i%2 == 0)
			printf("%d\n",i);

	}
}
