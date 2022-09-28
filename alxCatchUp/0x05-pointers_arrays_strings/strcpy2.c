#include "main.h"
#include <stdio.h> 

char *_strcpy(char *dest, char *src)
{
 	char *start = dest; 

	while (*src != '\0')
	{
	*dest = *src; 
	dest++;
	src++;
	}

	*dest = '\0';

	printf("Value of start: %x \n", *start);
	printf("Value of dest: %x \n", *dest);
	return (dest);
}

int main(void)
{
	char str1[15] = "SquarePants";
	char str2[15] = "Anaconda"; 

	printf("%s: \n", str1);
	printf("%s: \n", str2);

	_strcpy(str2, str1);

	printf("String after being copied \n");
	printf("%s \n", str2);

	
}
