#include<stdio.h>

int main()
{
	int total_marks, total_maximum_marks;
	int marks1, marks2, marks3, marks4, marks5;
	int max1, max2, max3, max4, max5;

	printf("Please provide marks for five subjects\n");
	printf("Enter the marks in the format obtained/maximum\n");
	printf("Example:\n");
	printf("90/100\n");

	scanf("%d/%d", &marks1, &max1);
	scanf("%d/%d", &marks2, &max2);
	scanf("%d/%d", &marks3, &max3);
	scanf("%d/%d", &marks4, &max4);
	scanf("%d/%d", &marks5, &max5);

	total_marks = marks1 + marks2 + marks3 + marks4 + marks5;
	total_maximum_marks = max1 + max2 + max3 + max4 + max5;

	printf("Total obtained marks: %d\n", total_marks);

	printf("Total maximum marks: %d\n", total_maximum_marks);

	return 0;
}
