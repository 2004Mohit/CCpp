#include<stdio.h>

void main() {

	int sellingPrice;
	int costPrice;
	int Profit;
	int Loss;

	printf("Enter Cost Price : ");
	scanf("%d",&costPrice);

	printf("Enter Selling Price : ");
	scanf("%d",&sellingPrice);
	
	if(costPrice > sellingPrice) {

		printf("Loss of %d.\n",costPrice - sellingPrice);
	
	} else if(costPrice < sellingPrice) {

		printf("Profit of %d.\n",sellingPrice - costPrice);

	} else if(costPrice == sellingPrice) {

		printf("No Profit No Loss.\n");
	
	} else {

		printf("Input is Invalid !!\n");

	}

}
