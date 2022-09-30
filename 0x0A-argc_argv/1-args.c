#include "main.h"
#include <stdio.h>

/**
 * main- Entry point
 * @argc: Argument Count
 * @argv: Argument vector
 * Return: 0 Success
 */

int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			count = count + 1;
		}
	printf("%d\n", count - 1);
	}
	return (0);
}
