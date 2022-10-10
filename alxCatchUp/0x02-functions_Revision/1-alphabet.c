#include "main.h"
#include <stdio.h>
#include <string.h>

void print_alphabet(void)
{
	int a = 0;
	int ascii = 97; // ascii value of 'a' is '97'

	/* While Loop */
	while (a < 26) // 26 letters of the alphabet
	{
		putchar(ascii);
		ascii++;
		a++;
	}
	putchar('\n');

	/* Using a For loop */
	ascii = 97;
	for (a = 0; a < 26; a++)
	{
		putchar(ascii++);
	}
	putchar('\n');
}

int main(int argc, char  *argv[])
{
	print_alphabet();
	return (0);
}
