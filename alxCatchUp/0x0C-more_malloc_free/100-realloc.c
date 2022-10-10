#include "main.h"
#include <stdlib.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *space, *cpy_ptr;

	cpy_ptr = ptr;
	ptr = malloc(old_size);
	ptr  = cpy_ptr;	

	if (new_size > old_size)
	{
	
	}
	if (new_size == old_size)
	{
		return  (ptr);
	}


	return (space);
}
