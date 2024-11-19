/*
 * Ques : 8
 * Print like this 1 B 3 D ...
 */

#include<stdio.h>
void main() {

	for(int i = 1; i <= 26; i++) {
		if(i%2 == 0){
			printf("%c ",64+i);
		}else{
			printf("%d ",i);
		}
	}
	printf("\n");
}
