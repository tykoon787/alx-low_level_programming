#include <stdio.h>
#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	struct dog *cpy_d;

	cpy_d = d;

	cpy_d->name = name;
	cpy_d->age = age;
	cpy_d->owner = owner;
}
