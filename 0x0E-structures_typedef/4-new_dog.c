#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Create new dog.
 * @name: Name of the new dog.
 * @age: Age of the new dog.
 * @owner: Owner of the new dog.
 * Return: New dog data.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t*));
	if (!newDog)
		return ('\0');

	newDog->name = name;
	newDog->age = age;
	newDog->owner = owner;

	return (newDog);
}
