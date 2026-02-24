#include<stdio.h>

#define N 3	// Number of students

int main()
{
	int total_marks[N], total_maximum_marks[N];
	int marks[N*5];
	int max[N*5];
	int i;

	printf("Marks summer for %d student(s)\n", N);

	for(i = 0; i < N*5; i++)
	{
		if(i % 5 == 0)
		{
			printf("----------------------------------------------------\n");
			printf("Enter marks for Student#%d\n", i/5+1); // Integer division ;)
			printf("Please provide marks for five subjects\n");
			printf("Enter the marks in the format obtained/maximum\n");
			printf("Example:\n");
			printf("90/100\n");
			total_marks[i/5] = total_maximum_marks[i/5] = 0;
		}
		scanf("%d/%d", &marks[i], &max[i]);
		total_marks[i/5] += marks[i];
		total_maximum_marks[i/5] += max[i];
	}

	printf("Here are the sum of marks for all students:\n");

	for(i = 0; i < N; i++)
		printf("Student#%d: %d/%d\n", i+1, total_marks[i], total_maximum_marks[i]);

	return 0;
}
