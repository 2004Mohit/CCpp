#include<stdio.h>

void main() {

	int Day;

	printf("Enter Number of Day (1-7) : ");
	scanf("%d",&Day);

	switch(Day) {
	
		case 1 : printf("MONDAY\n");
			 break;

		case 2 : printf("TUESDAY\n");
			 break;

		case 3 : printf("WEDNESDAY\n");
			 break;

		case 4 : printf("TURSDAY\n");
			 break;

		case 5 : printf("FRIDAY\n");
			 break;

		case 6 : printf("SATURDAY\n");
			 break;

		case 7 : printf("SUNDAY\n");
			 break;

		default : printf("Enter Valid Week Day !!\n");
	}
}
