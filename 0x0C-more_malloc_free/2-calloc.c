#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function that allocates memory for an array using `malloc`
 * @nmemb: Number of elements
 * @size: Size of elements (Memory s) in bytes
 * Return: (s) Allocated memory else NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);

	for (; i < nmemb * size; i++)
		*(s + i) = 0;

	return (s);
}
