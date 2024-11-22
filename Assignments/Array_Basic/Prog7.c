

#include<stdio.h>
void main() {

	int diff = 0, evenSum = 0, oddSum = 0, size = 0;

	printf("Enter the size of an Array : ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter Elements : \n");
	for(int i = 0; i < size; i++) {
	
		scanf("%d",&arr[i]);
	}

	for(int i = 0; i < size; i++) {
	
		if(i%2 == 0) {
			evenSum = evenSum + arr[i];
		} else {
			oddSum = oddSum + arr[i];
		}
	}

	if(evenSum > oddSum) { 
		diff = evenSum - oddSum;
	} else if(evenSum < oddSum) {
		diff = oddSum - evenSum;
	} else {
		diff = 0;
	}

	printf("Difference between even index elements sum and odd indexed element sum is : %d\n",diff);
}
