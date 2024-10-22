#include<stdio.h>

void main() {

	int units;
	int Total;

	printf("Enter Number of Units You Consumed : ");
	scanf("%d",&units);

	if(units <= 100) {

		Total = units * 5;
	
	} else if((units > 100) && (units <= 300)) {

		Total = units * 7;

	} else if(units > 300) {
	
		Total = units * 10;
	}

	printf("Your Total Bill is : %d Rs\n",Total);
}
