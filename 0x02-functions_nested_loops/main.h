#ifndef MAIN_H
#define MAIN_H

char _putchar(char c);
inline void print_alphabet(void)
{
	char lower; 

	for (lower = 'a'; lower <= 'z'; lower ++)
	{
		_putchar(lower);
	}
	_putchar('\n');
}

#endif
