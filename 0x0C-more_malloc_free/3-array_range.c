#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *array_range - print values between min max
 *@min: min
 *@max: max
 *
 *Return: pointer to array
 */
int *array_range(int min, int max)
{
	int i = 0;
	int j = 0;
	int range = 0;
	int *p;

	if (min > max)
		return (NULL);
	range = max - min + 1;
	p = malloc(sizeof(int) * range);
	if (p == NULL)
		return (NULL);
	for (i = min ; i <= max; i++)
	{
		p[j] = i;
		j++;
	}
	return (p);
}
