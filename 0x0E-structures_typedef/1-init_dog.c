 #include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initialize the dog structure.
 * @d: Pointer to the structure to initialize.
 * @name: Initialization of the name parameter.
 * @age: Initialization of the age parameter.
 * @owner: Initialization of the owner parameter.
 * Return: No return.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
