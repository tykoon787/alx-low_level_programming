#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup-  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: Input String
 * Return: Pointer to newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *str_copy, *dest;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	dest = str;

	while (*str)
	{
		len++;
		str++;
	}

	str = dest;
	str_copy = malloc(sizeof(char) * (len + 1));
	dest = str_copy;

	if (str_copy != NULL)
	{
		for (; i < len; i++)
		{
			str_copy[i] = *str;
			str++;
		}
		str_copy[i] = '\0';
		return (dest);
	}
	else
		return (NULL);
}
