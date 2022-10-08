#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *_strchr(char *s, char c)
{
	char *result;
	char *s_cpy;
	int i = 0;
	int s_len = 0;

	s_cpy = s;

	while (*s != '\0')
	{
		s_len++;
		s++;
	}
	s = s_cpy;

	for (; i < s_len; i++)
	{
		if (s[i] == c)
		{
			result = &s[i];
			break;
		}
		else if (s[i] != c)
			result = NULL;
	}

	return (result);
}

int main(void)
{
	char str1[] = "Baby Panda";
	char *ptr = _strchr(str1, 'c');
	if (ptr == NULL) // Dealing with segmentation fault
	{
		printf("Null Value\n");
	}
	else
		printf("%c\n",*ptr);
}
