#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int *array_range(int min, int max)
{

	int *ptArray;
	int i = 0, j = 0;
	int diff; 

	if (min > max)
		return NULL;
	
	diff = max - min;
	ptArray = malloc(sizeof(int) * diff);
	if (ptArray == NULL)
		return NULL;

	/* Loop for Array Creation */
	for (; i < diff; i++)
	{
		ptArray[i] = min;
		min++;
	}

	return (ptArray);
}
