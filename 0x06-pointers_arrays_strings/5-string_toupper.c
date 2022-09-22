#include "main.h"

/**
 * string_toupper - A Function that changes all lowercase letters of a  string
 * to upper case
 * @s: String
 * Return: String
 */
char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (start);
}
