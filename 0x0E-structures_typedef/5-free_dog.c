#include "dog.h"
#include <stdlib.h>
/**
 *free_dog - free memory allocated for dog struct
 *@d: pointer to struct to be freed
 *
 *Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
