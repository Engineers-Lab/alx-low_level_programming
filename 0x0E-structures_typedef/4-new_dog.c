#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 *new_dog - initialization of dogs struct
 *@name: dog's name
 *@age: dog's age
 *@owner: dog's owner name
 *
 *Return: pointer to new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
