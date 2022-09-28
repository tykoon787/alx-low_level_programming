#include <stdio.h>

char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest; 
	char *temp = src;
	int src_len = 0;

	while (*src)
	{
	src_len++;
	src++;
	}

	if (n > src_len)
	{
		n = src_len;
	}

	src = temp;

	while ( n != '0')
	{
		while (*src != '\0')
		{
		*dest = *src;
		dest++;
		src++;
		}
	n--;
	}


	*dest = '\0';
	return (dest);
}

int main(void)
{
	char str1[15] = "BabyPanda";	
	char str2[15] = " Is Amazing";

	printf("String 1 before function: %s \n", str1);
	_strncpy(str1, str2, 5);
	printf("%s \n", str1);
	return (0);
}
