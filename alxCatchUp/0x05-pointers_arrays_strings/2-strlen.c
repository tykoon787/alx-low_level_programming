/* #include "main.h" */
#include <stdio.h>

int _strlen(char *s)
{
	int count = 0;
	
	while (*s != '\0')
	{
	count++;
	s++;
	}
	return (count);
}

int main(void)
{
	char str[100];
	int length; 

	printf("Enter any string: ");
	scanf("%s",str);
	length = _strlen(str);

	printf("The length of the string is %d \n", length);
}
