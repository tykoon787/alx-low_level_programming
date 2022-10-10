#include "main.h"
#include <stdio.h>

int _abs(int n)
{
	int returnValue; 

	if (n > 0)
		returnValue = n;

	if (n < 0)
		returnValue = n * -1;
	
	if (n == 0)
		returnValue = 0;

	return (returnValue);
}

int main(void)
{
	printf("%d\n", _abs(-98));
	printf("%d\n", _abs(-9));
	printf("%d\n", _abs(0));
	printf("%d\n", _abs(1));
	return (0);
}
