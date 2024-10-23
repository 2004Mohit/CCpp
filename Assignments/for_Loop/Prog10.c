#include<stdio.h>

void main() {

	int count = 0;
	
	for(int i = 1; i <= 100; i++) {
	
		if((i%2 == 0) && (i%5 == 0)) {
		
			count++;
		}
	}

	printf("Count of Number divisible by 2 & 5 between 1 to 100 : %d\n",count);
}
