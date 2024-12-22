/*
 * Rows = 4
 * D C B A
 * D C B A
 * D C B A
 * D C B A
*/

#include<stdio.h>
void main() {

	int rows = 0;
	printf("Enter Rows : ");
	scanf("%d",&rows);
	for(int i = 0; i < rows; i++){
		char ch = 64 + rows;
		for(int j = 0; j < rows; j++){
			printf("%c\t",ch);
			ch--;
		}
		printf("\n");
	}
}
