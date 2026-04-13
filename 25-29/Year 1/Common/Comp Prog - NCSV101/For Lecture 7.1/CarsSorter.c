#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include "Car.h"

typedef struct PassengerVehicle Car;

void swap(Car* c1, Car* c2);
void sort(Car cars[], int len);
int compare(Car c1, Car c2);

int main()
{
	Car cars[3];
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

	sort(cars, 3);

	printf("The details of Cars (in alphabetical order):\n");

	for(i = 0; i < 3; i++)
        {
                printf("-------------------------\n");
                printf("%s\n", cars[i].name);
                printf("Capacity: %d people\n", cars[i].capacity);
                printf("Price: %05.2f lakhs\n", cars[i].price_in_lakhs);
                printf("-------------------------\n");
        }
}

int compare(Car c1, Car c2)
{
	int i = -1;
	// We don't really need to convert the 
	// names to lowercase, but this is just
	// to show you the "pass by value" part.
	// The changes made to c1 and c2 here,
	// are not reflected back !!
	while(c1.name[++i] != '\0')
		c1.name[i] = tolower(c1.name[i]);
	i = -1;
	while(c2.name[++i] != '\0')
		c2.name[i] = tolower(c2.name[i]);
	i = 0;
	while(c1.name[i] == c2.name[i])
		i++;
	return c1.name[i] - c2.name[i];
}

void swap(Car* c1, Car* c2)
{
	Car c3 = *c1;
	*c1 = *c2;
	*c2 = c3;
}

void sort(Car cars[], int len)
{
	int i, j;
	for(i = 0; i < len - 1; i++)
		for(j = 0; j < len - 1 - i; j++)
			if(compare(cars[j], cars[j+1]) > 0)
				swap(&cars[j], &cars[j+1]);
}
