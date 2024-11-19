/*
 * Ques : 9
 * Print like this a B c D e F g...
 */

#include<stdio.h>
void main() {

	for(int i = 1; i <= 26; i++) {
		if(i%2 == 0){
			printf("%c ",64+i);
		}else{
			printf("%c ",96+i);
		}
	}
	printf("\n");
}
