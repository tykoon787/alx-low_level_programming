#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
int get_len(int i);
char *str_cpy(char *dest, char *src);

/**
 * new_dog - Function that creates a new dog
 * get len of name + owner, malloc them, cpy name + owner to new
 * @name: name
 * @age: age
 * @owner: owner
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_name;
	char *cpy_name, *cpy_owner;
	unsigned int x, len_name = 0, len_owner = 0;

	new_name = malloc(sizeof(dog_t));
	if (name == NULL)
		return (NULL);
	if (name == NULL || age <= 0 || owner == NULL)
	{
		free(new_name);
		return (NULL);
	}

	for (x = 0; name[x] != '\0'; x++)
		len_name++;

	for (x = 0; owner[x] != '\0'; x++)
		len_owner++;

	cpy_name = malloc(sizeof(char) * (len_name + 1));
	if (cpy_name == NULL)
		return (NULL);

	cpy_owner = malloc(sizeof(char) * (len_owner + 1));
	if (cpy_owner == NULL)
		return (NULL);

	for (x = 0; x <= len_name; x++)
		cpy_name[x] = name[x];

	for (x = 0; x <= len_owner; x++)
		cpy_owner[x] = owner[x];

	new_name->name = cpy_name;
	new_name->owner = cpy_owner;
	new_name->age = age;
	return (new_name);
}
