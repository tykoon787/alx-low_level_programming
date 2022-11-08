#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/* Write a function that searches for an integer. */
/*                                                                   */
/* Prototype: int int_index(int *array, int size, int (*cmp)(int)); */
/* where size is the number of elements in the array array */
/* cmp is a pointer to the function to be used to compare values */
/* int_index returns the index of the first element for which the cmp function does not return 0 */
/* If no element matches, return -1 */
/* If size <= 0, return -1 */

int int_index(int *array, int size,int (*cmp)(int))
{

	/* result is the result stored after a chosesn
	*  function has ran */

	int answer,i, result;  

	if (cmp == NULL || array == NULL)
		return (-1);
	
	if (size <= 0)
	{
		printf("!!!!!!----Error-------!!!!");
		return (-1);
	}
	else 
	{
		for(i = 0; i < size; i++)	
		{
			result = (cmp(array[i]));
		}
		answer = result;
	}
	
	return (answer);
}
/* is _98 - Check if a number is equal to 98 
 * @elem: the integer to check
 *
 * Return: 0 if false, soemthing else otherwise.
 */

int is_98(int elem)
{
	return (98 == elem);
}

/**
 * is_strictly_positive - check if a number is greater than 0
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */

int is_strictly_positive(int elem)
{
	return (elem > 0);
}

/**
 * abs_is_98 - check if the absolute value of a number is 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */

int abs_is_98(int elem)
{
	return (elem == 98 || -elem == 98);
}

int main(void)
{
	int array[20] = 
	{0, -98, 98, 402, 1024, 4096, -1024, -98, 
	1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 98};

    	int index;

    	index = int_index(array, 20, is_98);
    	printf("%d\n", index);
    	index = int_index(array, 20, abs_is_98);
	printf("%d\n", index);
    	index = int_index(array, 20, is_strictly_positive);
    	printf("%d\n", index);
    	return (0);
}

