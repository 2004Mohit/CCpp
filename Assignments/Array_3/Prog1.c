#include<stdio.h>
void main() {

	int size = 0;

	printf("Enter the size of an Array : ");
	scanf("%d",&size);

	if(size <= 0) {
	
		printf("Invalid Array Size !!\nRe-enter Array Size : ");
		scanf("%d",&size);
	}

	int arr[size];
	int arr2[size];

	printf("Enter Elements : \n");
	for(int i = 0; i < size; i++) {
	
		scanf("%d",&arr[i]);
	}

	for(int i = 0; i < size; i++) {
	
		arr2[i] = arr[i];
	}

	printf("Here is your second array : \n");
	for(int i = 0; i < size; i++) {
	
		printf("%d\n",arr2[i]);
	}
}
