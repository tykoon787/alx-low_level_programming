#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main- Entry Point
 * @argc: Argument Count
 * @argv: Argument Vector
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc > 2)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
		printf("Error\n");
		return (1);
	return (0);
}
