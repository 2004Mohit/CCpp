/*
 * rows = 3
 * A1  A2  A3
 * A1  A2  A3
 * A1  A2  A3
 */
#include<stdio.h>
void main(){
	int rows = 0;
	printf("Enter Rows : ");
	scanf("%d",&rows);
	
	for(int i = 1; i <= rows; i++){
		
		for(int j = 1; j <= rows; j++) {
		
			printf("A%d\t",j);
			
		}
		printf("\n");
	}
}
