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
	char *temp = src;

	while (*dest != '\0')
	{
	dest++;
	}

	int src_len = 0;

	while (*src != '\0')
	{
	src_len++;
	src++;
	}

	if (n > src_len)
	{
		n = src_len;
	}
	else
	{
		n = n;
	}

	src = temp;

	while (n != 0)
	{
	*dest = *src;
	dest++;
	src++;
	n--;
	}

	*dest = '\0';
	return (start);
}
