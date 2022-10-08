#include "main.h"
#include <stdio.h>

unsigned int _strspn(char *s, char *accept)
{
	int result;
	int count = 0; 
	int i = 0, len_s = 0, len_accept = 0;
	char *s_cpy, *accept_cpy;
	int x = 0, y = 0, z = 0;

	s_cpy = s;
	accept_cpy = accept;

	while (*s)
	{
		len_s++;
		s++;
	}
	s = s_cpy;

	while (*accept)
	{
		len_accept++;
		accept++;
	}
	accept = accept_cpy;
	

	while (len_accept--)
	{
		for (; x < len_s; x++)
		{
			if (s[x] == accept[len_accept])
			{
				count++;
			}
		}
		x = 0;
	}
	return (count);
}

int main(void)
{
	char str1[] = "Baby Panda";
	printf("%d\n",_strspn(str1, "PB"));

	return (0);
}
