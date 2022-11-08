#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

void print_dog(struct dog *d)
{
	struct dog *cpy_d;

	cpy_d = d;

	if (d == NULL)
	{
		exit(0);
	}
	else
	{
		if (cpy_d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", cpy_d->name);
		}
		if (cpy_d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", cpy_d->owner);
		}
}
		printf("Age : %.1f\n", cpy_d->age);
}
	/* if (cpy_d->age == NULL) */
	/* { */
	/* 	printf("Age: (nil)\n"); */
	/* } */
	/* else  */
	/* { */
	/* 	printf("Age: %.3f\n", cpy_d->age); */
	/* } */

	/* 
	*
	* We can't check to see if age is NULL so there isn't much of a difference 
	* if we leave it without doing a check
	*
	*/
