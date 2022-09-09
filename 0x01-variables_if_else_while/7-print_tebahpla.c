#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry Point
 *
 * Return: Always (Success)
 */

int main(void)
{
	char lower;

	for (lower = 'z'; lower >= 'a'; lower--)
	{
		putchar(tolower(lower));
	}
	putchar('\n');
	return (0);
}


