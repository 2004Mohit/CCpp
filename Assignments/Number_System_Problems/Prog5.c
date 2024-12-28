/*
 * Count of Number : 
 *
 * Input : 98567
 * Output :
 * Count of 98567 is 5.
 *
*/

#include<stdio.h>
void main() {

	long num = 0, count = 0;
	printf("Enter Number : ");
	scanf("%ld",&num);

	long itr = num;
	while(itr > 0) {

		count++;
		itr /= 10;
	}
	
	printf("Count of %ld is %ld.\n",num,count);
}
