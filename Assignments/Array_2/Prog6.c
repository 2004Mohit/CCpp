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

	float arr[size];

	printf("Enter the Heights : \n");
	for(int i = 0; i < size; i++) {
	
		scanf("%f",&arr[i]);

		if((arr[i] < 5.5) || (arr[i] > 6)) {
		
			printf("Height shall not be greater than 6ft and less than 5.5ft.\nRe-enter the Height value : \n");
			scanf("%f",&arr[i]);
		}
	}

	printf("-----------------------\n");
	printf("Printing valid Heights: \n");
	
	for(int i = 0; i < size; i++) {
	
		printf("%f\n",arr[i]);
	}
}
