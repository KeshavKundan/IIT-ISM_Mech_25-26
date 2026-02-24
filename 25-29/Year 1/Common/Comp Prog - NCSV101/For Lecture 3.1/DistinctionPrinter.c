#include<stdio.h>

int main()
{
	int total, maximum;

	printf("Tell me your total marks: ");
	scanf("%d", &total);

	printf("... and the maximum  marks: ");
	scanf("%d", &maximum);

	float percentage = 100.0 * total / maximum;

	if(percentage >= 75) {
		printf("Looks like you got a Distinction !!\n");
	}

	printf("You got %f%% marks\n", percentage);
	
	return 0;
}
