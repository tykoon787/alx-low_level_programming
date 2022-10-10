#include "main.h"
#include <stdio.h>

int main(void)
{
	char word[] = "_putchar"; 
	int i = 0; // Counter; 
	

	for (; i < 8; i++)
	{
		printf("%c", word[i]);
	}
	putchar('\n');

	return (0);
}
