#include "main.h"
#include <stdio.h>

/**
 * _strpbrk -  Searches a string for any of a set of bytes.
 * @s: String
 * @accept: Character to be located in s 
 * Return:  pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}

		accept = start;
		s++;
	}
	return (NULL);
}
