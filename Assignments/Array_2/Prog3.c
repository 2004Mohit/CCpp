#include<stdio.h>
void main() {

	int sum = 0, size = 0;

	printf("Enter the size of an Array : ");
	scanf("%d",&size);

	if(size < 1) {

		printf("Invalid Array Size !!\n");
		printf("Re-enter Array Size !!\n");
		printf("Array Size : ");
		scanf("%d",&size);
	}

	int arr[size];

	printf("Enter Elements : \n");
	for(int i = 0; i < size; i++) {
	
		scanf("%d",&arr[i]);
		sum = sum + (arr[i]*arr[i]);
	}

	printf("-----------------------\n");
	printf("Sum of squares of all Elements : %d\n",sum);
}
