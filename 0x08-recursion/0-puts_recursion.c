#include "main.h"

/**
 * _puts_recursion- Function that prints a string
 * @s: Input String
 * Return: Nothing
 */
void _puts_recursion(char *s)
{

	int i = 0;

	while (s[i] != '\0')
	{
	_putchar(s[i]);
	i++;
	}
	_putchar('\n');
}
