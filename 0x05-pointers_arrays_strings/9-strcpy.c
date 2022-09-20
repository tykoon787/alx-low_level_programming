#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest: Destination of string
 * @src: Source string to copy from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *store = dest;
	int len = 0;

	while (src[len] != '\0')
	{
	while (*src)
		*dest++ = *src++;
	len++;
	}
	return (store);
}
