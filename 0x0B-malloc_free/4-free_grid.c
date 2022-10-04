#include "main.h"
#include <stdlib.h>

/**
 * free_grid - A Function that frees a 2D array of ints previously
 * created by your malloc_grid function
 * @grid: Input 2D array to be freed
 * @height: Height of Grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}
