#include "main.h"
#include <stdio.h>

void _puts_recursion(char *s)
{
	int len_s = 0, i;
	char *cpy_s;
	cpy_s = s;

	while (*s)
	{
		len_s++;
		s++;
	}
	s = cpy_s;

	for (i = 0; i < len_s; i++)
	{
		putchar(s[i]);	
	}
	putchar('\n');
}

int main(void)
{
	char str1[] = "Baby";
	_puts_recursion(str1);
	return (0);
}
