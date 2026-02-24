#include<stdio.h>

int main()
{
	int num = -1, i;
	long result = 1;

	for(printf("Give inputs\n");num < 0;)
	{
		printf("Give me a small positive integer: ");
		scanf("%d", &num);
	}

	for(i = 2; i <= num; i++)
		result *= i;

	printf("Calculated Factorial: %ld\n", result);

	return 0;
}
