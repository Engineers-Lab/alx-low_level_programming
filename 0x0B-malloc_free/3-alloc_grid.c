#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 *alloc_grid - create a 2D array
 *@width: rows
 *@height: columns
 *
 *Return:NULL on failure or 0 or negative dimensions
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int w = 0;
	int **pint;

	if (width <= 0 || height <= 0)
		return (NULL);
	pint = malloc(sizeof(int *) * height);
	if (pint == NULL)
	{
		free(pint);
		return (NULL);
	}
	for (w = 0; w < height; w++)
		pint[w] = malloc(sizeof(int) * width);
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			pint[i][j] = 0;
			j++;
		}
		i++;
	}
	return (pint);
}
