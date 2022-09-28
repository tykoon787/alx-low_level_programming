#include "main.h"
#include <stdio.h>

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while(*src != '\0')
	{
	*dest = *src;
	dest++; // 
	src++;
	}

	*dest = '\0';
	return (dest);
}

int main(void)
{
	char str1[15] = "BabyPanda"; // {b,a b, y, p, a, n, d, a} - Value 
	char str2[15] = "Anaconda";  //  1000, 1001, 1002, 1003 .. - Address

	printf("Before Copying: %s \n", str1); // str1 before copying: BabyPanda
	_strcpy(str1, str2); 
	printf("After Copying: %s \n", str1); // str1 after copying: Anaconda
	return (0);
}
