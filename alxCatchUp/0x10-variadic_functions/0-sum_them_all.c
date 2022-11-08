#include "main.h"
#include <stdio.h>
#include <stdarg.h>

int main(void)
{

	sum_them_all(4, 1, 2, 3, 4);
	return (0);

}

int sum_them_all(const unsigned int n, ...)
{
	int total = 0;

	if (n == 0)
		return (0);

	va_list num_args;

	va_start(num_args, n);
	for (int i = 0; i < n; i++)
	{
		total += va_arg(num_args, int);
	}
	printf("Total is :%d\n", total);
	return (total);
}
