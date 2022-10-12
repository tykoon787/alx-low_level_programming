#ifndef DOG_H
#define DOG_H

/**
 * struct dog - This is just a dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H*/
