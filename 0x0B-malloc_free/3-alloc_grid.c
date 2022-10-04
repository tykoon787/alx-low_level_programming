#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A Function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: Input Integer defining no. of columns
 * @height: Input Integer defining number of rows
 * Return: Pointer to a 2D array, else `NULL` on failure
 */
int **alloc_grid(int width, int height)
{
	int **array, i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		free(array);
		return (NULL);
	for (; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
			free(array);
			return (NULL);
	}

	for (i = 0; i < height; i++)
		for (; j < width; j++)
			array[i][j] = 0;
	return (array);
}
