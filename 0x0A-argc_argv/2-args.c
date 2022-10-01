#include "main.h"
#include <stdio.h>

/**
 * main- Entry Point
 * @argc: Argument Count
 * @argv: Argument Vector
 * Return: (0) Success
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 1; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}
