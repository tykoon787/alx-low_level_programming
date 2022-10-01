#include "main.h"
#include <stdio.h>

/**
 * main- Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 Success
 *
 */
int main(int argc, char *argv[])
{
	if (argc > 1)
		printf("%s\n", argv[0]);

	return (0);
}
