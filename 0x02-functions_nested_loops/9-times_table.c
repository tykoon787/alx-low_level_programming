#include "main.h"

/**
 * times_table - Prints n time table
 *
 * Return: Nothing
 *
 */

void times_table(void)
{
	int row, column, num, x;

	num = 9;
	for (row = 0; row <= num; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (column = 1; column <= num; column++)
		{
			x = (row * column);
			if ((x / 10) > 0)
			{
				_putchar((x / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((x % 10) + '0');

			if (column < num)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
