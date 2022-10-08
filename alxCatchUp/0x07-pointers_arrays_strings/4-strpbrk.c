#include "main.h"
#include <stdlib.h>

char *_strpbrk(char *s, char *accept)
{
	char *found, *cpy_s, *cpy_accept;
	int len_s = 0, len_accept = 0, x = 0;

	cpy_s = s;
	cpy_accept = accept;

	while (*s)
	{
		len_s++;
		s++;
	}
	s = cpy_s;

	while (*accept)
	{
		len_accept++;
		accept++;
	}
	accept = cpy_accept;

	while(len_accept--)
	{
		for(; x < len_s; x++)
		{
			if (s[x] == accept[len_accept])
			{
			found = &s[x];
			break;
			}
			else if (s[x] != accept[len_accept])
					return (NULL);
		}
		x = 0;
	}
	return (found);
}
