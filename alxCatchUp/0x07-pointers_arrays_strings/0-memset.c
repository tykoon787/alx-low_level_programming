#include "main.h"
#include <stdio.h>

char *_memset(char *s, char b, unsigned int n)
{

	char *start = s;

	while (n != 0)
	{
	*s = b;
	s++;
	}
	return (start);
}

int main(void)
{
	char str1[50] = "Green Eagle is Extinct \n";

	_memset(str1 + 3, '/', 5);
	printf("\n %s: ",str1);
}
