#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator -  Prints each element of an array
 * @array: A pointer to array
 * @size: Size of the array
 * @action: Pointer to print
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL || array == NULL)
		return;

	for (; i < size; i++)
		action(array[i]);
}
