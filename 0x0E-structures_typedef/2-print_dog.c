#include "dog.h"
#include <stdio.h>
/**
 *print_dog - prints dog struct
 *@d: pointer to the struct
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");
	(d->age != 0) ? printf("Age: %.1f\n", d->age) : printf("Age: (nil)\n");
	(d->owner != NULL) ? printf("Owner: %s\n", d->owner) :
		printf("Owner: (nil)\n");
}
