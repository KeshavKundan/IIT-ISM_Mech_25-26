#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void trim(char str[])
{
	int len = strlen(str), beg = 0, end = len-1, ctr = 0;
	while(beg <= end && str[beg] == ' ')
		beg++;
	while(end >= beg && str[end] == ' ')
		end--;
	for(ctr = 0; beg <= end; ctr++, beg++)
		str[ctr] = str[beg];
	str[ctr] = '\0';
}

int main()
{
	char str[] = "  Hello  ";
	printf("The initial array is \"%s\"\n", str);
	trim(str);
	printf("The array after trimming is \"%s\"\n", str);
}

