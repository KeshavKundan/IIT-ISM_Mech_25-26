#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* trim();
short startsWith(char* prefix);

char* str = NULL;

int main()
{
	str = "  Hello  ";
	printf("%d\n", startsWith("Hello"));
	str = trim();
	printf("%d\n", startsWith("Hello"));
	free(str);
}

char* trim()
{
	int len = strlen(str), beg = 0, end = len-1, ctr = 0;
	char* result = NULL;
	while(beg <= end && str[beg] == ' ')
		beg++;
	while(end >= beg && str[end] == ' ')
		end--;
	result = (char*) malloc(sizeof(char) * (end - beg + 2));
	while(beg <= end)
		result[ctr++] = str[beg++];
	result[ctr] = '\0';
	return result;
}

short startsWith(char* prefix)
{
	int len1 = strlen(str);
	int len2 = strlen(prefix);
	int i = 0, j = 0;
	if(len2 > len1)
		return 0;
	while(i < len2 && str[j] == prefix[i])
		i++, j++;
	return i == len2;
}
