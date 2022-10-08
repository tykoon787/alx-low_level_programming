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

	dest = str; // Copying the address of str to dest

	/* Calculating Length of String */
	while (*str)
	{
		len++;
		str++; // At this point the address of str has been moved
	}

	str = dest; // Resetting the address of str
	
	str_copy = malloc(sizeof(char) * (len + 1)); // Allocating size to str_copy
	dest = str_copy; // Creating a copy of the address in str_copy

	if (str_copy != NULL)
	{
		for (; i < len; i++)
		{
			str_copy[i] = *str;
			str++;
		}
		str_copy[i] = '\0'; // By the end of the loop, the address of str_copy will have 
		// moved to the end. So we need to return the address at the start of str_copy
		// which was copied to dest;
		return (dest);
	}
	else
		return (NULL);
}
