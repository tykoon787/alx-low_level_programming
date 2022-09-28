#include "main.h"

/**
 * _puts_recursion- Function that prints a string
 * @s: Input String
 * Return: Nothing
 */
void _puts_recursion(char *s)
{

	int len = 0;

	if (*s == '\0')
	{
	_putchar('\n');
	}
	else
	{
	_putchar(s[len]);
	len++;
	_puts_recursion(s + 1);
	}
}
