#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked- Function that allocates memory using `malloc`
 * @b: Input Integer
 * Return: s, pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(sizeof(s) * b);
	if (s == NULL)
		exit(98);

	return (s);
}
