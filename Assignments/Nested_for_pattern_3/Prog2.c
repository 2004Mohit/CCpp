/*
 * rows=3
 * 
 * C 1 B
 * C 2 B
 * C 3 B
 *
*/

#include<stdio.h>
void main() {

	int rows;

	printf("Enter Rows : ");
	scanf("%d",&rows);

	for(int i = 1; i <= rows; i++) {
		
		char ch = 64 + rows;
		
		for(int j = 1; j <= rows; j++) {
		
			if(j%2 != 0) {
				printf("%c\t",ch);
				ch--;
			}else{
				printf("%d\t",i);
			}
		}
		printf("\n");
	}
}
