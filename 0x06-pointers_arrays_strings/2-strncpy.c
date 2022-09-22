#include "main.h"

/**
 * _strncpy- Function that copies n number of bytes
 * from src to dest
 * @dest: Destination
 * @src: Source
 * @n: Number of bytes to be copied
 * Return: temp
 */
char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	srclen++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (temp);
}
