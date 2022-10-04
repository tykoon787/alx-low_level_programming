#include "main.h"

/**
 * _islower - Checks to see if the value passed is lowercase
 * @c: Character to be checked
 * Return: 1 if lowercase character. 0 otherwise
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1); /* lowercase char */
	}
	else
	{
		return (0); /* non-lowercase char */
	}
}
