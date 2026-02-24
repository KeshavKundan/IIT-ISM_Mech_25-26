#include<stdio.h>

int main()
{
	int num;
	long result = 1;

	do
	{
		printf("Give me a small positive integer: ");
		scanf("%d", &num);
	}
	while(num < 0);

	while(num > 1)
	{
		result *= num;
		num -= 1;
	}

	printf("Calculated Factorial: %ld\n", result);

	return 0;
}
