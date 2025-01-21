/*
 * rows = 3
 * 
 * C3 C3 C3
 * C3 C3 C3
 * C3 C3 C3
 *
*/

#include<stdio.h>
void main() {

	int rows;

	printf("Enter Rows : ");
	scanf("%d",&rows);

	char ch = 64 + rows;

	for(int i = 0; i < rows; i++) {
		
		for(int j = 0; j < rows; j++) {
		
			printf("%c%d\t",ch,rows);
		}
		printf("\n");
	}
}
