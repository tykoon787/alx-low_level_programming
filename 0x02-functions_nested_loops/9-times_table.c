#include "main.h"

/**
 * times_table - Prints n time table
 *
 * Return: Nothing
 *
 */

void times_table(void)
{
	int row, column, num, result;

	num = 9;
	for (row = 0; row <= num; row++)
	{
		for (column = 0; column <= num; column++)
		{
			result = row * column;
			_putchar(result);
		}
	}
}
