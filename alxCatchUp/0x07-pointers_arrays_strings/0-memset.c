#include "main.h"
#include <stdio.h>

char *_memset(char *s, char b, unsigned int n)
{

	char *start = s;

	while (n != 0)
	{
	*s = b;
	s++;
	n--;
	}
	return (start);
}

int main(void)
{
	char str1[50] = "Green Eagle is Extinct \n";

	_memset(str1, '/', 5);
	printf("%s: \n",str1);
}
