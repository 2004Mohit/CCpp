

#include<stdio.h>
void main() {

	int sum, size = 0;

	printf("Enter the size of an Array : ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter Elements : \n");
	for(int i = 0; i < size; i++) {
	
		scanf("%d",&arr[i]); 
		sum = sum + arr[i];
	}

	printf("Sum of all elements of an array: %d\n",sum);
}
