#include "main.h"
#include <stdio.h>

void print_alphabet(void)
{
	int a = 97; 
	int z = 122;

	while (a <= z)
	{
		printf("%c", a);
		a++;
	}

	int x; 
	x = 'a';
	while ('a' <= 'z')
	{
		putchar(x);
		x++;
	}
}

int main(void)
{
	print_alphabet();
	return (0);
}
