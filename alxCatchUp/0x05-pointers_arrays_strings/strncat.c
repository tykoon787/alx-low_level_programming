#include <stdio.h>

char *_strncat(char *dest, char *src, int n)
{
	// Create a copy of dest
	char *start = dest;

	// Move to the last character where the second will start appending
	while (*dest != '\0')
	{
	dest++;
	}

	// Append n number of times
	while (n != 0)
	{
	*dest = *src;
	dest++;
	src++;
	n--;
	}

	// Add a terminator to the End of String
	*dest = '\0';

	// Return
	return (start);	
}

int main(void)
{
	char str1[15] = "BabyPanda";
	char str2[25] = " Is Amazing Excess";

	_strncat(str1, str2, 6);
	printf("%s", str1);
	return (0);
}
