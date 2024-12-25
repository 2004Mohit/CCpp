/*
 * rows = 3
 * A  B  C
 * D  E  F
 * G  H  I
 *
 */
#include<stdio.h>
void main(){
	int rows = 0;
	printf("Enter Rows : ");
	scanf("%d",&rows);
	int ch = 65;
	for(int i = 0; i < rows; i++){
	
		for(int j = 0; j < rows; j++) {
		
			printf("%c\t",ch);
			ch++;
		}
		printf("\n");
	}
}
