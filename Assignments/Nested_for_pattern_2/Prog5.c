/*
 * rows = 3
 * 1   2   3
 * 3   2   1
 * 1   2   3 
 *
 */
#include<stdio.h>
void main(){
	int rows = 0;
	printf("Enter Rows : ");
	scanf("%d",&rows);
	for(int i = 1; i <= rows; i++){	
		
		int temp = rows;
		
		for(int j = 1; j <= rows; j++) {
		
			if(i%2!=0) {
				printf("%d\t",(j));
			} else {
				printf("%d\t",temp);
				temp--;
			}
		}
		
		printf("\n");
	}
}
