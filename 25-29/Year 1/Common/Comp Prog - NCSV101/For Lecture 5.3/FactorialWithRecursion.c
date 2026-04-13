#include<stdio.h>

long factorial(int number)
{
	if(number < 0)
		return -1;
	else if(number == 0 || number == 1)
		return 1;
	else
		return number * factorial(number-1);
}

int main()
{
	int number;
	do
	{
		printf("Give me a small positive integer: ");
        	scanf("%d", &number);
	}
	while(number < 0 || number > 20);

	printf("Calculated Factorial: %ld\n", factorial(number));
}
