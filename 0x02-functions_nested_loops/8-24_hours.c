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

	h = 0;
	while (counter != 0)
	{
	for (m = 0; m <= 59; m++)
	{
		_putchar((h / 10) + '0');
		_putchar((h % 10) + '0');
		_putchar(':');
		_putchar((m / 10) + '0');
		_putchar((m % 10) + '0');
		_putchar('\n');
	}
	h = h + 1;
	m = 0;
	counter = counter - 1;
	}
}
