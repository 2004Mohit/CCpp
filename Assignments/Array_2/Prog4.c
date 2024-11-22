#include<stdio.h>
void main() {

	int idIndex = 0, searchId = 0, size = 0;

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

	printf("Enter ID to search : \n");
	scanf("%d",&searchId);
	
	for(int i = 0; i < size; i++) {

		if(searchId == arr[i]) {
		
			idIndex = i;
			break;
		}
	}
	
	printf("ID %d found at Index : %d\n",searchId,idIndex);
}
