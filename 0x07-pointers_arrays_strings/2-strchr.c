#include "main.h"
#include <stdio.h>

/**
 * _strchr - A function that locates a character in a string.
 * @s: Input String
 * @c: Input character to locate into string s
 * Return: Pointer to c
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
