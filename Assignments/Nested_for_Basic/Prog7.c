/*
 * Rows = 4
 * A  A  A  A
 * B  B  B  B
 * C  C  C  C
 * D  D  D  D
*/

#include<stdio.h>
void main() {

	int rows = 0;
	printf("Enter Rows : ");
	scanf("%d",&rows);
	for(int i = 0; i < rows; i++){
		char ch = 65 + i;
		for(int j = 0; j < rows; j++){
			printf("%c\t",ch);
		}
		printf("\n");
	}
}
