/*
 * rows=3
 * 
 * 1 1 1
 * 4 8 4
 * 9 27 9
 *
*/

#include<stdio.h>
void main() {

	int rows;

	printf("Enter Rows : ");
	scanf("%d",&rows);

	for(int i = 1; i <= rows; i++) {
		
		int num = i*i;
		
		for(int j = 1; j <= rows; j++) {
		
			if(j%2 != 0) {
				printf("%d\t",num);
			}else{
				printf("%d\t",num*i);
			}
		}
		printf("\n");
	}
}
