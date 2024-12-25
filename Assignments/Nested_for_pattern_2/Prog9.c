/*
 * rows = 3
   1   B   3
   1   B   3
   1   B   3
 */
#include<stdio.h>
void main(){
	int rows = 0;
	printf("Enter Rows : ");
	scanf("%d",&rows);
	for(int i = 1; i <= rows; i++){	
		
		for(int j = 1; j <= rows; j++) {
		
			if(j%2!=0) {
				printf("%d\t",j);
			} else {
				printf("%c\t",64+j);
			}
		}
		
		printf("\n");
	}
}
