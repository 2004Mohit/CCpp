/*
 * Ques : 2
 * Print Table.
 */

#include<stdio.h>
void main() {

	int num, ans = 0;

	printf("Enter Number : ");
	scanf("%d",&num);

	printf("Table of %d : \n",num);
	for(int i = 1; i <= 10; i++) {
		
		ans = num*i;
		printf("%d\n",ans);
	}
}
