#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define MAX_CHARS 22
int main()
{
	char word[MAX_CHARS];
	int characters_count = 0, i = 0;
	char *characters = NULL;
	printf("Enter a word (up to 20 characters):\n");
	fgets(word, MAX_CHARS, stdin);
	// Find out the number of characters
	while(word[i++] != '\n')
		characters_count++;
	characters = (char*)malloc(sizeof(char) * (characters_count+1));
	for(i = 0; i < characters_count; i++)
		characters[i] = toupper(word[i]);
	characters[characters_count] = word[characters_count] = '\0';
	printf("%s, when converted to uppercase, is %s\n", word, characters);
	free(characters);
	return 0;
}
