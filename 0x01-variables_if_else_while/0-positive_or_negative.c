#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry Point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%d This is a positive number\n", n);
	}
	else if (n == 0)
	{
	printf("%d This number is equal to zero\n", n);
	}
	else if (n < 0)
	{
	printf("%d This number is a negative number\n", n);
	}
	return (0);
}
