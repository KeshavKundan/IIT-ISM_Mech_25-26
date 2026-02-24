#include<stdio.h>

int main()
{
	int year;
	
	printf("*** The Academic Session Informer ***\n");
	printf("Enter your programme's year (1, 2, 3 or 4): ");
	scanf("%d", &year);

	if(year == 1)
		printf("Your semester is delayed !!\n");
	else if(year == 2 || year == 3 || year == 4)
		printf("Your semester is on-time\n");
	else
		printf("Nice joke !!\n");

	return 0;
}
