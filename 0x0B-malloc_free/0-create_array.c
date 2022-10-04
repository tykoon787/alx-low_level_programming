#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array- Function that creates an array of size `size`
 * and assigns values `c` to the array
 * @size: Input Size of the Array
 * @c: Input Value to be assigned to array
 * Return: A pointer to the array
 *
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(size * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	else if (size == 0)
	{
		return (NULL);
	}

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);

}
