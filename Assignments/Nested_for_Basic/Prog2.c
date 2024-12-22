/*
 * Rows = 4
 * 1   2  3  4
 * 5   6  7  8
 * 9  10 11 12
 * 13 14 15 16
*/

#include<stdio.h>
void main() {

	int rows = 0;
	int num = 1;
	printf("Enter Rows : ");
	scanf("%d",&rows);

	for(int i = 0; i < rows; i++){
		for(int j = 0; j < rows; j++){
			printf("%d\t",num);
			num++;
		}
		printf("\n");
	}
}
