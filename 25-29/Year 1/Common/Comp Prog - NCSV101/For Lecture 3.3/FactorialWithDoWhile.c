#include<stdio.h>

int main()
{
	int num;
	long result = 1;

	printf("Give me a small positive integer: ");
	scanf("%d", &num);

	if(num > 0)
	{
		do
		{
			result *= num;
			// This is a short-cut to write
			// result = result * num;
			num -= 1;
			// This is a short-cut to write
			// num = num - 1;
		}
		while(num > 1);
	}

	printf("Calculated Factorial: %ld\n", result);

	return 0;
}
