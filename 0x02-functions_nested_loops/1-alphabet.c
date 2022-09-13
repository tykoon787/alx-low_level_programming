#include "main.h"

/**
 * print_alphabets - Prints all alphabets in lower case
 *
 * Return: Nothing
 *
 */
void print_alphabets(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		_putchar(lower);
	}
	_putchar('\n');
}
