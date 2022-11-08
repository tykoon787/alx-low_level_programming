#include "main.h"
#include <stdio.h>
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *store;
	if (separator != NULL)
	{
		va_list args;

		va_start(args, n);

		for(int i = 0; i < n; i++)
		{
			store = va_arg(args, char *);
			printf("%s%c", store, *separator); 
		}
		va_end(args);
		putchar('\n');
	}
}

int main(void)
{
	print_strings(",", 2, "Baby", "Panda");
	return (0);
}

