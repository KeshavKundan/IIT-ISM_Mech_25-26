#include<stdio.h>
#include<stdlib.h>

int main()
{
	int dummy;
	int *ptr = &dummy;

	printf("I am going to show you how Segmentation Faults occur\n");
	printf("I'll do that by accessing a memory location that I am not allowed to !!\n");
	printf("I am starting with an int* variable, pointing to memory location %p\n", ptr);
	do
	{
		printf("I am attempting to write at memory location %p\n", ptr);
		*ptr = 5;
		printf("Successful, press Enter to continue...");
		scanf("%*c");
		ptr++;
	}
	while(1);
}
