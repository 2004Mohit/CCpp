#include<stdio.h>

void main() {

	int x = 19;

	int ans1 = x++ + --x - x++;
	int ans2 = --x + x-- - x++ + ++x;

	printf("Value of x : %d\n",ans1); //19
	printf("Value of x : %d\n",ans2); //36
}
