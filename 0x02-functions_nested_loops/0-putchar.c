#include "main.h"

/**
 * main - Entry Point
 *
 *
 * Return: Always 0 (Success)
 *
 */
int main (void)
{
	char word[5] = "Oduor";
	int i; 

	for (i = 0; i < 5; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
	return (0);
}
