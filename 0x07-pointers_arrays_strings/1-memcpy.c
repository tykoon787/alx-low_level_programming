#include "main.h"

/**
 * _memcpy - Copys memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: start
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
	*dest = *src;
	src++;
	dest++;
	}
	return (start);
}
