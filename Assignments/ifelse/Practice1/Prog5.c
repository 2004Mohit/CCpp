#include<stdio.h>

void main() {

	char ch;
	int checkch;

	printf("Enter Character : ");
	scanf("%c",&ch);

	checkch = ch;

	if((checkch >= 97) && (checkch <= 122)) {
		
		printf("Character %c is in lowercase.\n",ch);
	
	} else if((checkch >= 65) && (checkch <= 90)) {

		printf("Character %c is in UPPERCASE.\n",ch);

	} else {

		printf("Enter Valid Character.\n");
	}

	/*for (int i = 0; i < 150; i++) {
	
		ch = i;
		printf("%d : %c\n",i,ch);
	}*/
}
