#include <stdio.h>

void _puts(char *str)
{
	char *t = str; 
	
	while(*t != '\0')
	{
	printf("%c", *t);
	t++;
	}
	putchar('\n');
}

int main(void)
{
	char input[] = "BabyPanda";
	_puts(input);
	return (0);
}
