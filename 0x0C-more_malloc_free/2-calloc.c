#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *_calloc - allocate memory for an array of size and assigne nmemb to it
 *@nmemb: the element
 *@size: size in bytes of the elements
 *
 *Return: pointer of undifined
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	int i = 0;

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	for (i = 0; i < (int)nmemb; i++)
		p[i] = 48;
	return ((void *)p);
}
