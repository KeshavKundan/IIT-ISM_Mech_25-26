#include<stdio.h>

int main()
{
	char string[5] = "Hi";
	// This is what gets stored in string:
	// Index ->  0  |  1  |  2  |  3  |  4
	// char  -> 'H' | 'i' |'\0' |  X  |  X
	// X implies some "garbage value"!!
	// i.e., some value that we don't care about...
	// By the way, what you are reading right now,
	// are called "comments"...
	// The compiler "ignores" any content on the current line,
	// that is preceded by two slashes, i.e. //
	
	puts(string);

	printf("Tell me a 4-letter word: ");
	gets(string);

	printf("You just said - ");
	puts(string);
}
