/*
 * rows = 3
   *   #   *
   *   #   *
   *   #   * 
 */
#include<stdio.h>
void main(){
	int rows = 0;
	printf("Enter Rows : ");
	scanf("%d",&rows);
	for(int i = 1; i <= rows; i++){	
		
		int temp = rows;
		
		for(int j = 1; j <= rows; j++) {
		
			if(j%2!=0) {
				printf("*\t");
			} else {
				printf("#\t");
				temp--;
			}
		}
		
		printf("\n");
	}
}
