#include "dog.h"
/**
 *init_dog - initialization of dogs struct
 *@d: dog's name
 *@name: dog's name
 *@age: dog's age
 *@owner: dog's owner name
 *
 *Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
