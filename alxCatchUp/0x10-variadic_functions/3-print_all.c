#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

void print_all(const char * const format, ...)
{
	char const *cpy_format;
	int size = 0, len_format = 0;
	


	cpy_format = format;

	/* 
	 * Get the length of format. Getting the length
	 * Will help us determine the number of loops  
	 */

	while(format[size] != '\0')
	{
		len_format++;
		size++;
	}
	size = 0;

	va_list args;
	va_start(args, format);

	while(len_format--)
	{
		switch (format[size])
		{
			case 'c':
			putchar(va_arg(args, int));	
			putchar('\n');
			break;

			case 'i':
			printf("%d\n", va_arg(args, int));
			break;

			case 'f':
			printf("%f\n", (float) va_arg(args, double));
			break;

			case 's':
			printf("%s", va_arg(args, char *));
			break;
		}
		size++;
	}
	putchar('\n');
}

int main(void)
{
	print_all("ceis", 'B', 3, "stSchool");
	return (0);
}
