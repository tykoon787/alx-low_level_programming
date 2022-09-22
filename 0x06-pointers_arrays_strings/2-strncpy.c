#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int length = 0; 
	int i = 0;
	char *temp = dest, *start = src;

	while (*src != '\0')
	{
	length++;
	src++;
	}

	if (n > length)
	{
	n = length;
	}

	src = start;

	for (; i < n; i++)
	{
	*dest++ = *src++;
	}
	return (temp);
}
