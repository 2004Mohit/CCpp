#include<stdio.h>

void main() {

	int count = 0;

	for(int i = 2; i <= 200; i = i+2) {

			count++;
	}

	printf("Count of Even Numbers between 2 to 200 : %d\n",count);
}
