#include "main.h"
#include <stdio.h>

/* 
 * _islower- Function that checks for a lower case character
 * @c: Function to be checked
 * Return: 1 if lowercase, 0 otherwise
 */

/* Explanation: A lower character falls betwen 97 and 122
 * 
 */
int _islower(int c)
{
	int ascii = 97;
	int returnType;

	for (; ascii <= 122; ascii++)
	{
	printf("%c versus %c\n",c,ascii);
		if (c == ascii)
		{
			printf("Found it\n");
			returnType = 1;
			break;
		}
		else if (c != ascii && ascii >= 122)
		{
			printf("Did not find it\n");
			returnType = 0;
		}
	}

	return (returnType);
}

int main(int argc, char **argv)
{
	int num;
	num = _islower('g');
	printf("Returned: %d\n", num);
	return (0);
}
