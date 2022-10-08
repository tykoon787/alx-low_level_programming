#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *mem_data, *cpy_dest, *cpy_src;
	int len_src = 0, i = 0;

	cpy_dest = dest;
	cpy_src = src;
	mem_data = cpy_dest;

	while (*src != '\0')
	{
		len_src++;
		src++;
	}

	src = cpy_src;

	while (n != 0)
	{
		for (; i != len_src; i++)
		{
			*dest = *src;
			dest++;
			src++;
		}
	n--;
	}
	return (mem_data);
}
