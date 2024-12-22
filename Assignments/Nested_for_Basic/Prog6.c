/*
 * Rows = 4
 * A  B  C  D
 * A  B  C  D
 * A  B  C  D
 * A  B  C  D
*/

#include<stdio.h>
void main() {

	int rows = 0;
	printf("Enter Rows : ");
	scanf("%d",&rows);
	char ch = 65;
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < rows; j++){
			printf("%c\t",(ch + i));
		}
		printf("\n");
	}
}
