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
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		int result;

		result = n * -1;
		return (result);
	}
}
