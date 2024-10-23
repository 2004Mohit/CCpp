#include<stdio.h>

void main() {

	int count = 0;
	int num;

	printf("Enter Your Number : ");
	scanf("%d",&num);

	for(int i = 2; i <= 10; i++) {
	
		if(num%i == 0) {
			count++;
		}
	}

	printf("Divisors of %d between 2 and 10 : %d\n",num,count);
}
