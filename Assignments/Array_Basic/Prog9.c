

#include<stdio.h>
void main() {

	int size = 0;
	int num = 0;

	printf("Enter the size of an Array : ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter Elements : \n");
	for(int i = 0; i < size; i++) {
	
		scanf("%d",&arr[i]);
	
	}

	for(int i = 0; i < size; i++) {
	
		if(arr[i]%5 == 0) {
			num = i;
			break;
		}
	
	}

	printf("First element divisible by 5 found at index : %d\n",num);
}
