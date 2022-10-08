#include "main.h"
#include <stdio.h>
#include <string.h>

/* 
 * reverse_array- Function that reverses a given array
 * @a: Pointer to an array
 * @n: Size of array
 * Return: Nothing
 *
 * How to do it
 * a) Loop through the array in reverse
 */
void reverse_array(int *a, int n)
{

	int i = n - 1; 

	for (; i >= 0; i--)
	{
		printf("%d", a[i]);
		putchar(',');
	}
}

/* int main(void) */
/* { */
/* 	int array[] = {12, 33, 44, 55, 66, 78}; */
/* 	int *ptrArray; */
/*  */
/* 	ptrArray = array; */
/* 	reverse_array(ptrArray, 5);	 */
/* 	return (0); */
/*  */
/* } */
