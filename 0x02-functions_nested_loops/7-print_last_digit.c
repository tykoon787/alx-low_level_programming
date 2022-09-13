#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: Number to be checked
 * Return: Last digit
 *
 */
int print_last_digit(int n)
{
	int result;

	if (n < 0)
	{
		result = (n % 10) * -1; /* Convert last digit of n to abs value*/
	}
	else
	{
		result = n % 10;
	}
	_putchar((result % 10) + '0');
	return (result % 10);
}

