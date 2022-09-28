#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion- Function that returns the length of a string
 * @s: Input String
 * Return: Length of String
 *
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
	_putchar('\n');
	}
	else
	{
		len++;
		_strlen_recursion(s + 1);
	}
	return (0);
}



