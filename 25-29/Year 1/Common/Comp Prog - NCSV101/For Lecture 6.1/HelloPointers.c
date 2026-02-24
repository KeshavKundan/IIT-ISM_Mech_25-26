#include<stdio.h>

int main()
{
	char hello[] = "Hello World !!";
	char *hptr = hello; // points to the starting address of hello
	for(;*hptr != '\0'; hptr++)
		printf("%c", *hptr);
	printf("\n");
	return 0;
}
