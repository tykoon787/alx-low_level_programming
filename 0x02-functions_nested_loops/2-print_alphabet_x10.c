#include "main.h"

/**
 * print_alphabet_x10 - Prints all the alphabets in lower case
 * 10 times
 *
 * Return: Nothing
 *
 */
void print_alphabet_x10(void)
{
	char lower;
	int counter; 
	
	for (counter = 0; counter <= 10; counter++)
	{
		for (lower = 'a'; lower <= 'z'; lower++)
			{
				_putchar(lower);
			}
			_putchar('\n');
	}
}
