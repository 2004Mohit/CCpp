

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

	char arr[size];

	printf("Enter Elements : \n");
	getchar();
	for(int i = 0; i < size; i++) {
	
		scanf("%c",&arr[i]);
		getchar();
	}

	printf("-----------------------------\n");
	for(int i = 0; i < size; i++) {

		printf("%d\n",arr[i]);
	}
}
