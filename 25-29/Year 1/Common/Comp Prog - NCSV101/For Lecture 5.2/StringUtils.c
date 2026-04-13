#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* trim(char* str);
short startsWith(char* str, char* prefix);

int main()
{
	char* str = "  Hello  ";
	printf("%d\n", startsWith(str, "Hello"));
	str = trim(str);
	printf("%d\n", startsWith(str, "Hello"));
	free(str);
}

char* trim(char *str)
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

short startsWith(char* str, char* prefix)
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
