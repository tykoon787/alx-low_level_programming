#include "main.h"

/**
 * _isdigit - Checks to see if arg passed is a digit
 * @c: Arg to be checked
 * Return: 1 if digit, else 0
 */
int _isdigit(int c)
{
	char i = '0';
	int isdigit = 0;

	for (; i <= '9'; i++)
	{
		if (i == c)
		{
			isdigit = 1;
			break;
		}
	}

	return (isdigit);
}
