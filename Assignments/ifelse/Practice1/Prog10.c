#include<stdio.h>

void main() {

	int Ang1;
	int Ang2;
	int Ang3;
	int sum;

	printf("Enter Degree of an Angle of Triangle\n");
	printf("Angle 1 : ");
	scanf("%d",&Ang1);
	
	printf("Angle 2 : ");
	scanf("%d",&Ang2);
	
	printf("Angle 3 : ");
	scanf("%d",&Ang3);
	
	sum = Ang1 + Ang2 + Ang3;

	if((Ang1 > 0) && (Ang2 > 0) && (Ang3 > 0)) {

		if(sum == 180) {
		
			printf("Tringle is Valid.\n");
		} else {
	
			printf("Tringle is NOT Valid.\n");
		}

	} else {
		
		printf("Invalid Input.\n");	
	}
}
