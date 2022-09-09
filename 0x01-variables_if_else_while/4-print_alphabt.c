#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry Point
 *
 * Return: Always (Success)
 */
int main(void)
{
	char lower, e, q;

	e = 'e';
	q = 'q';

	for (lower = 'a'; lower <= 'z'; lower++)
	{
	if (lower != 'e' && lower != 'q')
	{
		putchar(tolower(lower));
	}
	}
	putchar('\n');
	return (0);
}
