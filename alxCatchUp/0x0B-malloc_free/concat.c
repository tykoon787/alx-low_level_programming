#include <stdio.h>
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	char *add_s1, *add_s2, *new_str;
	int counter = 0;
	int lens1 = 0; 
	int lens2 = 0;

	/* Copying Origin Addresses */
	add_s1 = s1;
	add_s2 = s2;

	if (s1 == NULL)
		s1 = "";
	
	/* Calculate Length of s1 */
	while (*s1 != '\0')
	{
		lens1++;
		s1++;
	}

	/* Return s1 to original address */
	s1 = add_s1;

	/* Calculate Lengh of s2 */
	if (s2 == NULL)
		s2 = "";
	
	while (*s2 != '\0')
	{
		lens2++;
		s2++;
	}

	/* Return s2 to original address */
	s2 = add_s2;

	/* Allocate Space to hold concatanated string */
	new_str = malloc(sizeof(char) * (lens1 + lens2 + 1));
	char *add_new_str = new_str;	

	/* Loop through concatanation */
	for (; counter < (lens1 + lens2); counter++)
	{
		if (counter < lens1)
		{
			new_str[counter] = *s1;
			s1++;
		}
		else
		{
			new_str[counter] = *s2;
			s2++;
		}
	}
	new_str[counter] = '\0';
	return (add_new_str);	
}

int main(void)
{
	char str1[] = "Baby ";
	char str2[] = "Panda";
	printf("%s\n", str_concat(str1,str2));
	return (0);
}
