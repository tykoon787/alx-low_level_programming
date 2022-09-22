#include <stdio.h>
#include <string.h>

char *_strcat(char *str1, char *str2)
{
	char *start = str1;

	while(*str1 != '\0')
	{
	str1++;
	}

	while(*str2 != '\0')
	{
	*str1 = *str2;
	str1++;
	str2++;
	}

	*str1 = '\0';
	return (start);
}

int main(void)
{
	char first_string[15] = "";
	printf("Enter a string: ");
	scanf("%s", first_string);
	printf("String Entered is: %s \n", first_string);

	printf("=============================== \n");
	char second_string[15] = " Is Amazing";
	_strcat(first_string, second_string);
	printf("String After Concatenation: %s \n", first_string);
	return (0);
}
