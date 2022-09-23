#include "main.h"

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
	int length = 0;
	int i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		length++;
		src++;
	}

	while (*dest)
	{
	dest++;
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

	*dest = '\0';
	return (temp);
}
