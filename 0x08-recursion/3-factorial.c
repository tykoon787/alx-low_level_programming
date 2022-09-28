#include "main.h"

/**
 * factorial- Returns the factorial of a given number
 * @n: Input Integer
 * Return: -1 if n < 0, 1 if n == 0, else return factorial
 *
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

