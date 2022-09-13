#include "main.h"

/**
 * _abs - Returns the absolute value of any number
 * @n: Value to be checked
 * Return: 0 (Success)
 */
int _abs(int n)
{
	if (n > 0)
	{
		_putchar(n);
	}
	else
	{
		_putchar((n - n) + 0);
	}
	return (0);
}
