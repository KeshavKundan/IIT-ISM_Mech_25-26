#include<stdio.h>
#include<string.h>

int main()
{
	FILE* fptr = NULL;
	char str[102];
	char file_name[22];

	printf("Enter the name of the file containing the message (max 20 chars): ");
        fgets(file_name, 20, stdin);

	file_name[strlen(file_name)-1] = '\0'; // To remove the extra \n character

	fptr = fopen(file_name, "r"); //"r" - read

	fgets(str, 100, fptr);

	printf("The message is:\n%s", str);
	
	fclose(fptr);
}
