#include<stdio.h>

int main()
{
	int year;
	
	printf("*** The Academic Session Informer ***\n");
	printf("Enter your programme's year (1, 2, 3 or 4): ");
	scanf("%d", &year);

	switch(year)
	{
		case 1:
			printf("Your semester is delayed !!\n");
			break;
		case 2:
			printf("Your semester is on-time\n");
			break;
		case 3:
			printf("Your semester is on-time\n");
			break;
		case 4:
			printf("Your semester is on-time\n");
			break;
		default:
			printf("Nice joke !!\n");
	}

	return 0;
}
