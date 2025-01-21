/*
 * rows = 5
 *
 * A B C D E
 * A B C D E
 * A B C D E
 * A B C D E
 * A B C D E
 *
 * rows = 6
 *
 * 65 B 67 D 69 F
 * 65 B 67 D 69 F
 * 65 B 67 D 69 F
 * 65 B 67 D 69 F
 * 65 B 67 D 69 F
 * 65 B 67 D 69 F
 *
*/

#include<stdio.h>
void main() {

	int rows;

	printf("Enter Rows : ");
	scanf("%d",&rows);

	for(int i = 1; i <= rows; i++) {
		
		char ch = 65;
		
		for(int j = 1; j <= rows; j++) {
		
			if(rows%2 != 0) {
			
				printf("%c\t",ch);

			}else{
			
				if(j%2 == 0) {
					printf("%c\t",ch);
				}else{
					printf("%d\t",ch);
				}

			}

			ch++;
		}
		printf("\n");
	}
}
