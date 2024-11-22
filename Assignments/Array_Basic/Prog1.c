

#include<stdio.h>
void main() {

	int size = 0;

	printf("Enter the size of an Array : ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter Elements : \n");
	for(int i = 0; i < size; i++) {
	
		scanf("%d",&arr[i]);
	}

	printf("Printing even indexed elements : ");
	for(int i = 0; i < size; i++) {
	
		if(i%2 == 0)
			printf(" %d ",arr[i]);
	}
	printf("\n");
}
