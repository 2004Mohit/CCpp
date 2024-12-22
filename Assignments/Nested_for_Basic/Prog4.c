/*
 * Rows = 4
 * 1  1  1  1
 * 2  2  2  2
 * 3  3  3  3
 * 4  4  4  4
*/

#include<stdio.h>
void main() {

	int rows = 0;
	printf("Enter Rows : ");
	scanf("%d",&rows);

	for(int i = 1; i <= rows; i++){
		for(int j = 1; j <= rows; j++){
			printf("%d\t",i);
		}
		printf("\n");
	}
}
