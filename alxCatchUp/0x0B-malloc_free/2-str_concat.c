#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings
 * @s1: Input Pointer to First String
 * @s2: Input Pointer to second string
 * Return: A pointer to concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *str_new, *starts1, *starts2;
	int i = 0, lens1 = 0, lens2 = 0;

	starts1 = s1;
	starts2 = s2;
	if (s1 == NULL)
		s1 = "";
	while (*s1)
	{
		lens1++;
		s1++;
	}
	s1 = starts1;
	if (s2 == NULL)
		s2 = "";
	while (*s2)
	{
		lens2++;
		s2++;
	}
	s2 = starts2;
	str_new = malloc(sizeof(char) * (lens1 + lens2 + 1));
	starts1 = str_new;
	if (str_new == NULL)
		return (NULL);
	for (; i < (lens1 + lens2); i++)
	{
		if (i < lens1)
		{
			str_new[i] = *s1;
			s1++;
		}
		else
		{
			str_new[i] = *s2;
			s2++;
		}
	}
	str_new[i] = '\0';
	return (starts1);
}

int main(void)
{
	char str1[] = "Baby ";
	char str2[] = "Panda";
	printf("%s\n",str_concat(str1, str2));
	return (0);
}
