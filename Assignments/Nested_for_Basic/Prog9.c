/*
 * Rows = 4
 * a1  b1  c1  d1
 * a1  b1  c1  d1
 * a1  b1  c1  d1
 * a1  b1  c1  d1
*/

#include<stdio.h>
void main() {

	int rows = 0;
	printf("Enter Rows : ");
	scanf("%d",&rows);
	for(int i = 0; i < rows; i++){
		char ch = 'a';
		for(int j = 0; j < rows; j++){
			printf("%c1\t",(ch+j));
		}
		printf("\n");
	}
}
