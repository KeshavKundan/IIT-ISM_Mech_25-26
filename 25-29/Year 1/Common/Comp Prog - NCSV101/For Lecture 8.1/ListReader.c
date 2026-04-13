#include<stdio.h>
#include<string.h>

int main()
{
	int number_of_elements, i;
	int temp;
	FILE* fptr = NULL;
	char file_name[22];

	printf("Enter the name of the file containing the list (max 20 chars): ");	
	fgets(file_name, 20, stdin);

	file_name[strlen(file_name)-1] = '\0'; // To remove the extra \n character

	fptr = fopen(file_name, "rb"); //"r" - read, "b" - in binary mode (instead of text)

	// Read the number of elements in the list
	fread(&number_of_elements, sizeof(int), 1, fptr);

	printf("This is what I read:\n");
	// Now read the list
	for(i = 0; i < number_of_elements; i++)
	{
		fread(&temp, sizeof(int), 1, fptr);
		printf("%d\n", temp);
	}

	fclose(fptr);
}
