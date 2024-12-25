/*
 * rows = 3
 * 3   6   9
 * 12  15  18
 * 21  24  27 
 *
 */
#include<stdio.h>
void main(){
	int rows = 0;
	printf("Enter Rows : ");
	scanf("%d",&rows);
	int count = 1;
	for(int i = 1; i <= rows; i++){	
		
		for(int j = 1; j <= rows; j++) {
	
				printf("%d\t",rows*count);
				count++;
		}
		
		printf("\n");
	}
}
