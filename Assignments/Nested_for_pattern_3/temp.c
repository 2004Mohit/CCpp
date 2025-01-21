#include<stdio.h>

void main() {

	printf("A TO Z : \n");
	for(char ch = 'A'; ch <= 'Z'; ch++) {
		printf("%d : %c\n",ch,ch);
	}

	printf("a TO z : \n");
	for(char ch = 'a'; ch <= 'z'; ch++) {
		printf("%d : %c\n",ch,ch);
	}
}
