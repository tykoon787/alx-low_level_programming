#include "main.h"
#include <stdio.h>

void print_alphabet_x10(void)
{
	int a = 0, i = 0; // Where `i` is the main counter
	int ascii = 97;

	for (; i <= 10; i++)
	{
	printf("Loop number: %d\n",i);
		for (; a < 26; a++)
		{
		putchar(ascii++);
		}
	putchar('\n');
	a = 0; // Reset value of a
	ascii = 97; // Reset ascii value
	}
	printf("Number of prints %d\n", i-1);
}

int main(int argc, char **argv)
{
	print_alphabet_x10();
	return (0);
}
