#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat- Functions that concats `s1` with `n` number of bytes from
 * `s2`
 * @s1: Input String
 * @s2: Input String
 * @n: Input Integer / No. of bytes
 * Return: (s) Pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *cpy_s1, *cpy_s2, *new_str, *cpy_new_str;
	int lens1 = 0; 
	int lens2 = 0; 
	int i = 0;
	unsigned int j = 0;

	cpy_s1 = s1;
	cpy_s2 = s2;

	if (s1 == NULL)
		s1 = "";

	while (*s1 != '\0')
	{
	lens1++;
		s1++;
	}

	s1 = cpy_s1;

	if (s2 == NULL)
		s2 = "";

	while (*s2 != '\0')
	{
		lens2++;
		s2++;
	}

	s2 = cpy_s2;

	new_str = malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (new_str == NULL)
		return (NULL);

	cpy_new_str = new_str;

	for (; i < lens1; i++)
	{
	*new_str = *s1;
	new_str++;
	s1++;
	}

	new_str = cpy_new_str;

	while (*new_str != '\0')
		new_str++;

	for (; j <= n; j++)
	{
		*new_str = *s2;
		new_str++;
		s2++;
	}
	return (cpy_new_str);
}
