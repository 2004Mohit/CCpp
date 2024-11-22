

#include<stdio.h>
void main() {

	int size = 0;

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
	}

	printf("Here is your Array : \n");
	for(int i = (size - 1); i >= 0; i--) {

		printf("%d\n",arr[i]);
	}
}
