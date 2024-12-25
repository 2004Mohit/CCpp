/*
 * rows = 3
 * 3  2  1
 * 3  2  1
 * 3  2  1
 *
 */
#include<stdio.h>
void main(){
	int rows = 0;
	printf("Enter Rows : ");
	scanf("%d",&rows);
	
	for(int i = 0; i < rows; i++){
		int temp = rows;
		for(int j = 0; j < rows; j++) {
		
			printf("%d\t",temp);
			temp--;
		}
		printf("\n");
	}
}
