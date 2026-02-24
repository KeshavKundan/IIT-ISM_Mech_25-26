#include<stdio.h>

int main()
{
	int total_marks, total_maximum_marks;
	int marks[5];
	int max[5];

	printf("Please provide marks for five subjects\n");
	printf("Enter the marks in the format obtained/maximum\n");
	printf("Example:\n");
	printf("90/100\n");

	scanf("%d/%d", &marks[0], &max[0]);
	scanf("%d/%d", &marks[1], &max[1]);
	scanf("%d/%d", &marks[2], &max[2]);
	scanf("%d/%d", &marks[3], &max[3]);
	scanf("%d/%d", &marks[4], &max[4]);

	total_marks = marks[0] + marks[1] + marks[2] + marks[3] + marks[4];
	total_maximum_marks = max[0] + max[1] + max[2] + max[3] + max[4];

	printf("Total obtained marks: %d\n", total_marks);

	printf("Total maximum marks: %d\n", total_maximum_marks);

	return 0;
}
