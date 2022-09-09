#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry Point
 *
 * Return: Always (Success)
 *
 */
int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
	putchar(tolower(x));
	}
	putchar('\n');
	return (0);
}
