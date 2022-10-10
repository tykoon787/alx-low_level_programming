#include "main.h"
#include <stdio.h>

int print_last_digit(int n)
{
	int returnValue; 
	
	returnValue = n % 10;

	return(returnValue);
}

int main(void)
{

	printf("%d\n", print_last_digit(245));
	return (0);
}
