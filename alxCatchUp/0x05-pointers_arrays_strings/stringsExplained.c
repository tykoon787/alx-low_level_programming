#include <stdio.h>

int main(void)
{
	char str[100];
	printf("Enter any string: ");
	scanf("%s",str);
	
	printf("The string you entered is, %s \n", str);

	/* String Variable */
	char str2[15];

	/* Pointer Variable */
	char *ptr = str2;

	printf("Enter String 2: ");
	scanf("%s", str2);
	printf("The Second string is: %s \n", str2);

	/* Accessing the string using Pointers */

	printf("Accessing the String using pointers \n");
	printf("The string passed is: ");
	while (*ptr != '\0')
	{
	printf("%c", *ptr);
	ptr++; /* Moving pointer to next memory location */
	}
 	putchar('\n');

	/* Getting the length of the string */
 	printf("Getting the length of a string \n");

	char str3[15];
	char *ptr_str3 = str3; 
	int count = 0;
	
	printf("Enter Third String: ");
	scanf("%s", str3);
	printf("The string you enetered is: %s \n",str3);
	while(*ptr_str3 != '\0')
	{
	count++;
	ptr_str3++;
	}
	printf("The length of the second string is: %d \n", count);



	/* Using Pointers to Print Strings */
	printf("Using Pointers to print Strings \n");

	char *ptr_str4 = "Snake"; // Pointer Declaration
	char *t = ptr_str4;

	printf("The string you entered is: ");
	while(*t != '\0')
	{
	printf("%c", *t);
	t++;
	}
	putchar('\n');
}
