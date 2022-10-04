#include "main.h"

/**
 * _memset - Fills memory with constant bytes
 * @s: fill location
 * @b: char to fill location with
 * @n: number of bytes to fill
 * Return: Location Filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
	*s = b;
	s++;
	}
	return (start);
}
