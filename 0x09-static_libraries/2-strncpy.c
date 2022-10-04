#include "main.h"

/**
 * _strncpy - Copys the strings.
 * @dest: Destination
 * @src: Source
 * @n: Number of bytes to be copied
 * Return: temp
 */
char *_strncpy(char *dest, char *src, int n)
{
	int length = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		length++;
		src++;
	}

	length++;

	if (n > length)
		n = length;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (temp);
}
