#include<stdio.h>

#define N 3	// Number of students

int main()
{
	int total_marks[N], total_maximum_marks[N];
	int marks[N][5];
	int max[N][5];
	int i, j;

	printf("Marks summer for %d student(s)\n", N);

	for(i = 0; i < N; i++)
	{
		printf("----------------------------------------------------\n");
		printf("Enter marks for Student#%d\n", i+1);
		printf("Please provide marks for five subjects\n");
		printf("Enter the marks in the format obtained/maximum\n");
		printf("Example:\n");
		printf("90/100\n");
		total_marks[i] = total_maximum_marks[i] = 0;
		for(j = 0; j < 5; j++)
		{
			scanf("%d/%d", &marks[i][j], &max[i][j]);
			total_marks[i] += marks[i][j];
			total_maximum_marks[i] += max[i][j];
		}	
	}

	printf("Here are the sum of marks for all students:\n");

	for(i = 0; i < N; i++)
		printf("Student#%d: %d/%d\n", i+1, total_marks[i], total_maximum_marks[i]);

	return 0;
}
