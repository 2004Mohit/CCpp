/*
 * Factors : 
 *
 * Input : 15
 * Output :
 * Factors of 15 are 1,3,5,15
 *
*/

#include<stdio.h>
void main() {

	int num = 0;
	printf("Enter Number : ");
	scanf("%d",&num);

	printf("Factors of %d are : \n",num);
	int itr = 1;
	while(itr <= num) {

		if(num%itr == 0) {
		
			printf("%d\n",itr);
		}

		itr++;
	}
}
