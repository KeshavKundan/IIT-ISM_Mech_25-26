#include<stdio.h>

void imperfect_swap(int a, int b)
{
	int temp;
	printf("In function imperfect_swap()\n");
	printf("Before swap...\n");
	printf("a = %d, b = %d\n", a, b);
	printf("Swapping...\n");
	temp = a;
	a = b;
	b = temp;
	printf("After swap...\n");
	printf("a = %d, b = %d\n", a, b);
}

int main()
{
	int a = 5, b =15;
	printf("In function main()\n");
	printf("Before swap...\n");
	printf("a = %d, b = %d\n", a, b);
	printf("Calling the function to swap values...\n");
	imperfect_swap(a, b);
	printf("Call to the function returned\n");
	printf("a = %d, b = %d\n", a, b);
	return 0;
}
