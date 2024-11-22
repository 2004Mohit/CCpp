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

	printf("Enter the child age : \n");
	for(int i = 0; i < size; i++) {
	
		scanf("%d",&arr[i]);

		if(arr[i] > 5) {
		
			printf("Age should not be greater than 5. Re-enter the Age. \n");
			scanf("%d",&arr[i]);
		}
	}

	printf("-----------------------\n");
	
	for(int i = 0; i < size; i++) {
	
		printf("%d\n",arr[i]);
	}
}
