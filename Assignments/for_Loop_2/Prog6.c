/*
 * Ques : 6
 * Print Noraml Table for Even Input and Reverse Table for Odd.
 */

#include<stdio.h>
void main() {

	int num, ans = 0;

	printf("Enter Number : ");
	scanf("%d",&num);

	printf("Table of %d : ",num);
	if(num%2 == 0) {
	
		for(int i = 1; i <= 10; i++) {

                	ans = num*i;
                	printf("%d ",ans);
        	}
		printf("\n");
	}else{
		for(int i = 10; i > 0; i--) {

                	ans = num*i;
                	printf("%d ",ans);
        	}
		printf("\n");
	}

}
