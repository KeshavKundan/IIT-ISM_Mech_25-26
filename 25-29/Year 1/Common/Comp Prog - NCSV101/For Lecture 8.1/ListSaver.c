#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
 * To know what this code does, read this link:
 * https://stackoverflow.com/questions/17318886/fflush-is-not-working-in-linux
 * We will discuss non-library functions in Week 7
 */
void clean_stdin(void)
{
	int c;
	do
	{
		c = getchar();
	}
	while (c != '\n' && c != EOF);
}

int main()
{
	int number_of_elements, i;
	int* elements = NULL;
	FILE* fptr = NULL;
	char file_name[22];

	printf("Enter the number of integers in your list: ");
	scanf("%d", &number_of_elements);

	elements = (int*) malloc(sizeof(int) * number_of_elements);
	printf("Enter the elements of the list:\n");
	for(i = 0; i < number_of_elements; i++)
		scanf("%d", &elements[i]);

	clean_stdin();

	printf("Enter the name of the file to store the list (max 20 chars): ");	
	fgets(file_name, 20, stdin);

	file_name[strlen(file_name)-1] = '\0'; // To remove the extra \n character

	fptr = fopen(file_name, "wb"); //"w" - write, "b" - in binary mode (instead of text)

	// Write the size of the list first
	fwrite(&number_of_elements, sizeof(int), 1, fptr);

	// Now write the list
	fwrite(elements, sizeof(int), number_of_elements, fptr);

	printf("Saved your list in %s. Use the ListReader program to read it.\n", file_name);

	free(elements);
	fclose(fptr);
}
