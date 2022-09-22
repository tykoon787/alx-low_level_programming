#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[12] = "Hello";
	char str2[12] = "World";
	char str3[12];
	int len;

	strcpy(str3, str1); // Copy String1 to String3
	printf("strcpy( str3, str1) : %s\n", str3); // Print the string copied to str3
	return (0);
}
