/* #include "main.h" */
#include <stdio.h>

void swap_int(int *a, int *b)
{
	int *store; 
	store = a;
	store = b;

	printf("The value of a and b, %p and %p, respectively are: \n",a, b);
}

int main(void)
{
	int g = 98;
	int h = 45;
	int *x = &g;
	int *y = &h;

	swap_int(x,y);
}
