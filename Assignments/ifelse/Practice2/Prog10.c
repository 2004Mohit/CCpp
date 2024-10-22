#include<stdio.h>

void main() {

	char ch;

	printf("=======================Oh ! You're Back From Your Exam.=====================\n");
	printf("Was Your Exam was Good ?\n");
	printf("Choose Only [Y/N]\n");
	scanf("%c",&ch);

	if((ch == 'y') || (ch == 'Y')) {
		
		printf("Good !!\n");
	
	} else if((ch == 'n') || (ch == 'N')) {
		
		printf("Go Out or Watch Movie !!\n");
	
	} else {
	
		printf("Type Only Y/N.\n");
	}
}
