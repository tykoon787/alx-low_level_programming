#include "main.h"

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 *
 * print_alphabet - Prints all alphabets
 * in lower case
 *
 */
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		_putchar(lower);
	}
	_putchar('\n');
	return (0);
}
