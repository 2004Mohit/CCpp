/*
 * rows=3
 * 
 * 1 1 1
 * 4 4 4
 * 9 9 9
 *
*/

#include<stdio.h>
void main() {

	int rows;

	printf("Enter Rows : ");
	scanf("%d",&rows);

	for(int i = 1; i <= rows; i++) {
		
		int sqNum = i*i;

		for(int j = 1; j <= rows; j++) {

			printf("%d\t",sqNum);

		}
		printf("\n");
	}
}
