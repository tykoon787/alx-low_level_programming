#include "main.h"
#include <stdio.h>


int _isalpha(int c)
{

	if (c >= 'a' && c <= 'z' || c >= 'A' && c >= 'Z')
	{
		printf("Found alphabetic character: %c \n",c);
		return (1);
	}
	else
		printf("Did not find alphabetic character: %c\n", c);
		return (0);
}

int main (void)
{
	_isalpha('g');
	_isalpha('A');
	return (0);
}
