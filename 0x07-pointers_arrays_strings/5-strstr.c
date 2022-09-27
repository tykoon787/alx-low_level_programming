#include "main.h"
#include <stdio.h>

/**
 * _strstr -  Locates a substring.
 * @haystack: String to search
 * @needle: String to locate haystack
 * Return:  a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *start_n = needle, *start_h = haystack;

	while (*haystack)
	{
		start_h = haystack;
		needle = start_n;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = start_h + 1;
	}
	return (NULL);
}
