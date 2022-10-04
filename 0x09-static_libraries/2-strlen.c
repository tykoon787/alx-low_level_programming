#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Input string
 * Return: Length
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
