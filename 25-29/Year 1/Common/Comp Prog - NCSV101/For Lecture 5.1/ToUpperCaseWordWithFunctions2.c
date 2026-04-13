#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define MAX_CHARS 22

void to_uppercase_word(char* word, int number_of_characters)
{
	if(number_of_characters == 0)
	{
		printf("You entered an empty string\n");
		return;
	}
	char* characters = NULL;
	int i;
	characters = (char*)malloc(sizeof(char) * (number_of_characters+1));
	for(i = 0; i < number_of_characters; i++)
		characters[i] = toupper(word[i]);
	characters[number_of_characters] = word[number_of_characters] = '\0';
	printf("%s, when converted to uppercase, is %s\n", word, characters);
	free(characters);
}

int main()
{
	char word[MAX_CHARS];
	int characters_count = 0, i = 0;
	printf("Enter a word (up to 20 characters):\n");
	fgets(word, MAX_CHARS, stdin);
	// Find out the number of characters
	while(word[i++] != '\n')
		characters_count++;
	to_uppercase_word(word, characters_count);
}
