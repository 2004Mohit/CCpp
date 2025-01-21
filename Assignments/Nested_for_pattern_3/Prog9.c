/*
 * rows = 3
 * 
 * D c G
 * d G e
 * G f J
 *
 * rows = 4
 *
 * E d H e
 * f I g L
 * I h L i
 * j M k P
 *
*/

#include<stdio.h>
void main() {

	int rows;

	printf("Enter Rows : ");
	scanf("%d",&rows);

	char CH = 65 + rows;
	char ch = 96 + rows;
	//int count = 0;

	for(int i = 1; i <= rows; i++) {

		int count = 0;
		
		for(int j = 1; j <= rows; j++) {
		
			if(i%2 != 0) {
				if(j%2 != 0) {
					count++;
					printf("%c\t",CH);
					CH += 3;
				}else{
					printf("%c\t",ch);
					ch++;
				}
			}else{
				if(j%2 != 0) {
					printf("%c\t",ch);
					ch++;
				}else{
					count++;
					printf("%c\t",CH);
					CH += 3;
				}
			}
		}
		if(i%2 == 0) {
			CH -= 3*count;
		}else{
			CH -= 3;
			CH++;
		}
		printf("\n");
	}
}
