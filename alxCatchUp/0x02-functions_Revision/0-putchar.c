#include "main.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	char word[8] = "_putchar";
	int i = 0; // Counter
	
	for (; i < 8; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
	return (0);
}
