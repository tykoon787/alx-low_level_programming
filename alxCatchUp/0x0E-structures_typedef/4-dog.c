#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/* 
 * dog_t- Function that creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner's name
 * Return: Nothing
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *a_new_dog;
	char *cpy_name, *cpy_owner; 
	int len_name, len_owner, i;

	cpy_owner = owner; 
	cpy_name = name;

	/* Allocate space for the dog */
	dog_t *ret =(dog_t *)malloc(sizeof(dog_t));
	if (ret == NULL)
		return (NULL);
	else 
		a_new_dog = ret;

	/* Length of Name */
	while (*name != '\0')
	{
		len_name++;
		name++;
	}
	name = cpy_name;

	/* Length of Owner's Name */
	while (*owner != '\0')
	{
		len_owner++;
		owner++;
	}
	owner = cpy_owner;

	/* Allocate Space to store the name */
	cpy_name = (char *)malloc(sizeof(len_name +1));
	if (cpy_name == NULL)
		return (NULL);
	
	/* Allocate space to store the owner's name */
	cpy_owner = (char *)malloc(sizeof(len_owner + 1));
	if (cpy_owner == NULL)
		return (NULL);
	

	/* Copy the contents of name to cpy_name */
	for(i = 0; i < len_name; i++)
	{
		cpy_name[i] = name[i];
	}
	cpy_name[i] = '\0'; 

	/* Copy the contents of the owner's name to cpy_owner */
	for (i = 0; i < len_owner; i++)
	{
		cpy_owner[i] = owner[i];
	}
	cpy_owner[i] = '\0'; 
	
	/* Assign the values correctly */
	a_new_dog->name = cpy_name;
	a_new_dog->owner = cpy_owner;
	a_new_dog->age = age;

	return(a_new_dog);
}

/* 
 * destroy_dog- Function that free's the heap
 * @obj: An object of type dog_t
 * Return: Nothing
 */
void destroy_dog(dog_t *obj)
{
	if (obj)
		free(obj);
}

/* 
 * main- Entry Point
 * Return: (0) Success
 */

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}
