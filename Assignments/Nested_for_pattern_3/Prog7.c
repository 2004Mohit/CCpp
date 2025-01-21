/*
 * rows=3
 * 
 * I 8 G
 * F 5 D
 * C 2 A
 *
 * rows=4
 *
 * P 15 N 13
 * L 11 J 9
 * H 7 F 5
 * D 3 B 1
 *
*/

#include<stdio.h>
void main() {

	int rows;

	printf("Enter Rows : ");
	scanf("%d",&rows);

	int sqRow = rows * rows;

	char ch = 64 + sqRow;
	
	for(int i = 1; i <= rows; i++) {
			
		for(int j = 1; j <= rows; j++) {
		
			if(j%2 != 0) {
				printf("%c\t",ch);
			}else{
				printf("%d\t",sqRow);
			}

			ch--;
			sqRow--;
		}
		printf("\n");
	}
}
