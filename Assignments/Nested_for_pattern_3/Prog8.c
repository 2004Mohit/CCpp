/*
 * rows=3
 * 
 * c d e
 * f e d
 * c d e
 *
 * rows=4
 *
 * d e f g
 * h g f e
 * d e f g
 * h g f e
 *
*/

#include<stdio.h>
void main() {

	int rows;

	printf("Enter Rows : ");
	scanf("%d",&rows);

	for(int i = 1; i <= rows; i++) {
		
		char ch = 96 + rows;

                if(i%2 != 0) 
                        ch;
                else
                        ch += rows;
		
		for(int j = 1; j <= rows; j++) {
		
			printf("%c\t",ch);
			
                	if(i%2 != 0) 
                        	ch++;
                	else
                        	ch--;
		}
		printf("\n");
	}
}
