#include<stdio.h>
#include<string.h>

int main()
{
	char str[102];
	char file_name[22];
	FILE* fptr = NULL;

	printf("Enter a message (up to 100 characters): ");
	fgets(str, 100, stdin);

	printf("Enter the name of the file to store the message (max 20 chars): ");
	fgets(file_name, 20, stdin);
	file_name[strlen(file_name)-1] = '\0'; // To remove the extra \n character
	
	fptr = fopen(file_name, "w"); //"w" - write
	
	fprintf(fptr, "%s", str);

	printf("Saved your message in %s. Use the MessageReader program to read it.\n", file_name);

	fclose(fptr);
}
