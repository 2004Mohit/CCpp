/*
 * Rows = 4
 * 1A 1A 1A 1A
 * 1A 1A 1A 1A
 * 1A 1A 1A 1A
 * 1A 1A 1A 1A
*/

#include<stdio.h>
void main() {

	int rows = 0;
	printf("Enter Rows : ");
	scanf("%d",&rows);
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < rows; j++){
			printf("1A\t");
		}
		printf("\n");
	}
}
