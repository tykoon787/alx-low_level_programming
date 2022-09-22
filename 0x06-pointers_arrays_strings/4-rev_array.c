#include "main.h"

/**
 * reverse_array - Reverse an array.
 * @a: Array
 * @n: number of elements of array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int chng;

	while (i < n--)
	{
		chng = a[i];
		a[i++] = a[n];
		a[n] = chng;
	}
}
