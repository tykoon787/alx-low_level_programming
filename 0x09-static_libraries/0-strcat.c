#include "main.h"

/**
 * _strcat- Concatanates dest with src
 *
 * @dest: Destination
 * @src: Source
 *
 * Return: start
 */

char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
	{
	dest++;
	}

	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}
	*dest = '\0';
	return (start);
}
