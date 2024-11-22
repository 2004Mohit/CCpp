

#include<stdio.h>
void main() {

	int size = 0;
	int prod = 1;

	printf("Enter the size of an Array : ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter Elements : \n");
	for(int i = 0; i < size; i++) {
	
		scanf("%d",&arr[i]);
		if(arr[i]%2 == 0) 
			prod = prod * arr[i];
	}

	printf("Product of even elements : %d\n",prod);
}
