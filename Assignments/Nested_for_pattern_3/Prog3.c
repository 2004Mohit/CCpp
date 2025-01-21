/*
 * rows=3
 *
 * 1 2 3
 * 2 3 4
 * 3 4 5
 *
*/

#include<stdio.h>
void main() {

	int rows;

	printf("Enter Rows : ");
	scanf("%d",&rows);

	for(int i = 1; i <= rows; i++) {
		
		int num = i;

		for(int j = 1; j <= rows; j++) {

			printf("%d\t",num);
			num++;

		}
		printf("\n");
	}
}
