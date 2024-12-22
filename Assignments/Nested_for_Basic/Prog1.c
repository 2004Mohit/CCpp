/*
 * Rows = 4
 * 1 1 1 1
 * 1 1 1 1
 * 1 1 1 1
 * 1 1 1 1
*/

#include<stdio.h>
void main() {

	int rows = 0;
	printf("Enter Rows : ");
	scanf("%d",&rows);

	for(int i = 0; i < rows; i++){
		for(int j = 0; j < rows; j++){
			printf("1\t");
		}
		printf("\n");
	}
}
