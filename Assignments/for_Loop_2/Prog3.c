/*
 * Ques : 3
 * Print Alphabets Excluding Vowels (i.e. B,C,D,F....Z).
 */

#include<stdio.h>
void main() {

	for(int i = 65; i <= 90; i++) {
		if(i == 'A' || i == 'E' ||i == 'I' ||i == 'O' ||i == 'U'){
		
		}else{
			printf("%c\n",i);
		}
	}
}
