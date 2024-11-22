#include<stdio.h>
void main() {

	int printIndex = 0, size = 0;

	printf("Enter the size of an Array : ");
	scanf("%d",&size);

	if(size < 1) {

		printf("Invalid Array Size !!\n");
		printf("Re-enter Array Size !!\n");
		printf("Array Size : ");
		scanf("%d",&size);
	}

	int arr[size];

	printf("Enter the Elements : \n");
	
	for(int i = 0; i < size; i++) {
	
		scanf("%d",&arr[i]);

	}

	printf("Enter the index vale up to which you want to print the elements : ");
	scanf("%d",&printIndex);

	if(printIndex > size) {
	
		printf("Index cannot be greater than size. Re-enter the index value : ");
		scanf("%d",&printIndex);
	}
	
	for(int i = 0; i < printIndex; i++) {

		printf("%d | ",arr[i]);
	}
	printf("\n");
}
