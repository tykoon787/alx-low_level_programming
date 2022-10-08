#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Write a function that creates an array of chars, 
 * and initializes it with a specific char.
 * @size: Array Size
 * @c: Character to be assigned
 * Return: Returns a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ptArray;

	/* Allocate Memory Space */
	ptArray = malloc(sizeof(char) * size);

	/* Loop for Array Creation */
	int i = 0; // Counter
	
	while (i <= size)
	{
		ptArray[i] = c;  	
	}

	return(ptArray);


}
