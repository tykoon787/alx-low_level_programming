#include "main.h"
#include <stdio.h>

/**
 * _strncat- Copies n bytes from src to dest
 * @dest: Destination
 * @src: Source
 * @n: number of bytes to append to dest
 * Return: start
 *
 */
char *_strncat(char *dest, char *src, int n)
{

	char *start = dest;

	while (*dest != '\0')
	{
	dest++;
	}

	if (n < 0)
	{

	}

	int result;

	if (n < 0)
	{
		result = n * -1;
	}
	else
	{
		result = n;
	}
	while (result != 0)
	{
	*dest = *src;
	dest++;
	src++;
	result--;
	}

	*dest = '\0';
	return (start);
}
