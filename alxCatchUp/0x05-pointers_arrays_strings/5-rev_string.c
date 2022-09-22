#include <stdio.h>

void rev_string(char *s)
{

	int len = 0;

	while(s[len] != '\0')
	{
	len++;
	s++;
	}
	printf("Length of string is: %d \n", len);

	int i = 0; 
	char store;

	while (i < len--)
	{
	store = s[i]; // Temporarily store the first letter
	s[i++] = s[len]; // Store the value in s[i++] to s[len]
	s[len] = store; // Store s[len] to store variable
	printf("%c", store);
	}
	putchar('\n');
}

int main(void)
{

	char userInput[15] = "BabyPanda";
	rev_string(userInput);
	return (0);
}
