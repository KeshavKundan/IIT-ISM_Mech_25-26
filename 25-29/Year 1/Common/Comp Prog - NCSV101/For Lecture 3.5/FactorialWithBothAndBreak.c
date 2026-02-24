#include<stdio.h>

int main()
{
	int num;
	long result = 1;

	do
	{
		printf("Give me a small positive integer: ");
		scanf("%d", &num);
		if(num >= 0)
			break;
		printf("I said, a \"positive\" number !!\n");
	}
	while(1);

	while(num > 1)
	{
		result *= num;
		num -= 1;
	}

	printf("Calculated Factorial: %ld\n", result);

	return 0;
}
