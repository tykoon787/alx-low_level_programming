#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


void print_numbers(const char *separator, const unsigned int n, ...)
{
	int store = 0;
	if (separator != NULL)
	{
		va_list args; 

		va_start(args, n);

		printf("%d", va_arg(args, int));
		printf("%c", *separator);
		for (int i = 2; i < n; i++)
		{
			store = va_arg(args, int);
			printf(" %d%c",store ,*separator);
		}
		printf(" %d",va_arg(args, int));
		va_end(args);
		putchar('\n');
	}
}

int main(void)
{
	print_numbers(",", 3, 5, 6, 7);
	return (0);
}
