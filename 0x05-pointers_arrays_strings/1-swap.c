#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: First Integer pointer
 * @b: Second Interger pointer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int chng; /* change*/

	chng = *a;
	*a = *b;
	*b = chng;
}
