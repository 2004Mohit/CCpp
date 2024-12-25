/*
 * rows = 3
 * C  C  C
 * B  B  B
 * A  A  A
 *
 */
#include<stdio.h>
void main(){
	int rows = 0;
	printf("Enter Rows : ");
	scanf("%d",&rows);
	int ch = 64 + rows;
	for(int i = 0; i < rows; i++){
		
		for(int j = 0; j < rows; j++) {
		
			printf("%c\t",ch);
			
		}
		ch--;
		printf("\n");
	}
}
