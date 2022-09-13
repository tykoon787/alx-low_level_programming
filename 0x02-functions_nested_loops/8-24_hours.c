#include "main.h"

/**
 * jack_bauer - Prints all the time of the day
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	int counter = 24;
	int h, m;

	h = 00;
	while (counter != 0)
	{
	for (m = 00; m <= 59; m++)
	{
		_putchar(h);
		_putchar(58); /*ASCII Value for colon is 58*/
		_putchar(m);
	}
	h = h + 1;
	m = 00;
	counter = counter - 1;
	}
}
