#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints n to 98
 * @n: Random Number
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
	int max;

	max = 98;
	while (n != max)
	{
	n = n + 1;
	printf("%d, ", n);
	}


}
