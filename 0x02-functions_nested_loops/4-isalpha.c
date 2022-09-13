#include "main.h"

/**
 * _isalpha - Checks to see if the value passed is an aplhabetic char 
 * @c: Character to be checked
 * Return: 1 if alphabetic character. 0 otherwise
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1); /* alphabetic char */
	}
	else
	{
		return (0); /* non-alphabeteic char */
	}
}
