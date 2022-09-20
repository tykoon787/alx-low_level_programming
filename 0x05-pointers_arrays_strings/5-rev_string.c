#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char store;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		store = s[i];
		s[i++] = s[len];
		s[len] = store;
	}
}
