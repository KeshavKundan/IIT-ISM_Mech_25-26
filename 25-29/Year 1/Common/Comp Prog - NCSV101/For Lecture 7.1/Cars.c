#include<stdio.h>
#include<string.h>
#include "Car.h"

int main()
{
	struct PassengerVehicle cars[3];
	int i;
	
	strcpy(cars[0].name, "Toyota Innova Crysta");
	cars[0].capacity = 8;
	cars[0].price_in_lakhs = 16.27;

	strcpy(cars[1].name, "Hyundai Creta");
	cars[1].capacity = 5;
	cars[1].price_in_lakhs = 10;

	strcpy(cars[2].name, "Kia Seltos");
	cars[2].capacity = 5;
	cars[2].price_in_lakhs = 9.9;

	printf("We have three cars on show today:\n");

	for(i = 0; i < 3; i++)
	{
		printf("-------------------------\n");
		printf("%s\n", cars[i].name);
		printf("Capacity: %d people\n", cars[i].capacity);
		printf("Price: %05.2f lakhs\n", cars[i].price_in_lakhs);
		printf("-------------------------\n");
	}
}
