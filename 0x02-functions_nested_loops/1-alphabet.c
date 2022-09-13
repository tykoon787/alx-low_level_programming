#include "main.h"

/**
 * print_alphabet - Prints all the alphabets in lower case
 *
 * Return: Nothing
 *
 */
void print_alphabet(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		_putchar(lower);
	}
	_putchar('\n');
}
