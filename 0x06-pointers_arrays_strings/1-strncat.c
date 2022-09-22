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

	char *start = dest;

	while (*dest != '\0')
	{
	dest++;
	}

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

