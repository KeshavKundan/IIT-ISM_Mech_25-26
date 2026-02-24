#include<stdio.h>

int main()
{
	int total, maximum;

	printf("Tell me your total marks: ");
	scanf("%d", &total);

	printf("... and the maximum  marks: ");
	scanf("%d", &maximum);

	float percentage = 100.0 * total / maximum;

	int passed = percentage >= 33;

	if(!passed)
	{
		printf("Sorry.. you have failed :(\n");
	}
	else {
		if(percentage >= 90)
			printf("You are doing great !!\n");
		else if(percentage < 90 && percentage >= 75)
			printf("You are doing well, kep going !!\n");
		else if(percentage < 75 && percentage >= 50)
			printf("Keep working hard, you can do it !!\n");
		else
			printf("There's still time... push hard !!\n");
	}

	printf("You got %f%% marks\n", percentage);
	
	return 0;
}
