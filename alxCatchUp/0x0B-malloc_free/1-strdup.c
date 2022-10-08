#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str)
{
	
	/* Declarations */
	char *duplicated_str;
	int len = 0; /* Used for Calculating the Length of Source String */
	int size; /* Size of allocated Space */
	char *end;

	char *src = str;

	while (*str != '\0') 
	{
		len++;
		str++;
	}

	printf("Length of String :%d\n", len);

	/* Allocating size to store duplicated string */
	duplicated_str = malloc((len + 1) * sizeof(char));
	end = duplicated_str;

	printf("Starting Address of dup_str: %p\n", duplicated_str);
	/* Checking if Allocated Memory Space is NULL */
	if (duplicated_str == NULL)
		return (NULL);
	
	/* Check for Insufficient Memory */
	size = ((len + 1) * sizeof(char));
	if (len > size)
	{
		printf("Not enough memory\n");
		return (NULL);
	}

	/* Copying Source string to Duplicated String */
	str = src;
	while (*str != '\0')
	{
		*duplicated_str = *str;
		duplicated_str++;
		str++;
	}
	*duplicated_str = '\0';

	/* Accessing Duplicated String */
	duplicated_str = end;	
	while (*duplicated_str)
	{
		printf("%c", *duplicated_str);
		duplicated_str++;
	}
	putchar('\n');
	return (end);
}

