/*
 * rows = 3
 * A  B  C
 * a  b  c
 * A  B  C 
 */
#include<stdio.h>
void main(){
	int rows = 0;
	printf("Enter Rows : ");
	scanf("%d",&rows);
	for(int i = 1; i <= rows; i++){	
		
		for(int j = 1; j <= rows; j++) {
		
			if(i%2!=0) {
				printf("%c\t",64+j);
			} else {
				printf("%c\t",96+j);
			}
		}
		
		printf("\n");
	}
}
