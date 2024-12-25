/*
 * rows = 3
 * 1   3   5
 * 7   9   11
 * 13  15  17 
 *
 */
#include<stdio.h>
void main(){
	int rows = 0;
	printf("Enter Rows : ");
	scanf("%d",&rows);
	int num = 1;
	for(int i = 0; i < rows; i++){
		
		for(int j = 0; j < rows; j++) {
		
			printf("%d\t",num);
			num += 2;
		}
		printf("\n");
	}
}
