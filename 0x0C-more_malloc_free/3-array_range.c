#include "main.h"
#include <stdlib.h>

/**
 * array_range - Function that creates an array of integers
 * @min: Input min Integer
 * @max: Input max Integer
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int diff, i;
	int *array;

	if (min > max)
		return (NULL);

	diff = max - min;
	array = malloc((diff + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; i <= diff; i++)
	{
		array[i] = min++;
	}

	return (array);
}

