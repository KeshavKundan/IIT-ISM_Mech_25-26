#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define MAX_CHARS 22

char* to_uppercase_word(char* word, int number_of_characters);

int main()
{
	char word[MAX_CHARS];
	int characters_count = 0, i = 0;
	char* uppercase_word = NULL; 
	printf("Enter a word (up to 20 characters):\n");
	fgets(word, MAX_CHARS, stdin);
	// Find out the number of characters
	while(word[i++] != '\n')
		characters_count++;
	uppercase_word = to_uppercase_word(word, characters_count);
	printf("%s, when converted to uppercase, is %s\n", word, uppercase_word);
	free(uppercase_word);
	return 0;
}

char* to_uppercase_word(char* word, int number_of_characters)
{
	char* characters = NULL;
	int i;
	characters = (char*)malloc(sizeof(char) * (number_of_characters+1));
	for(i = 0; i < number_of_characters; i++)
		characters[i] = toupper(word[i]);
	characters[number_of_characters] = word[number_of_characters] = '\0';
	return characters;
}

