#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *create_array - creates array of chars and be initialized with a specific char
 *@int: array size
 *@c: initialization char
 *
 *Return: NULL if size=0 || pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ps;
	unsigned int i;

	if (size == 0)
		return (NULL);
	else
	{
		ps = malloc(sizeof(char) * size);
		for (i = 0; i < size; i++)
			ps[i] = c;
		return (ps);
	}
}
