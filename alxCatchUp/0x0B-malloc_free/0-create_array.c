#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *ptArray; 
	unsigned int i = 0;

	ptArray = malloc(size * sizeof(char));
	
	/* Loop for Array Creation */

	while (i <= size)
	{
		ptArray[i] = c;
		i++;
		/* ptArray++; */
	}

	return (ptArray);
}

