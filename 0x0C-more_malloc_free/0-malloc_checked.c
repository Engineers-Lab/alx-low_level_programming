#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *malloc_checked - allocate memory and do the checking
 *@b: amount of memory
 *
 *Return: pointer to malloc; void cz its undefined type yet
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		return (98);
	return (p);
}
