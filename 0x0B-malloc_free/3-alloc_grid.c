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
	for (w = 0; w < width; w++)
		pint[w] = malloc(sizeof(int) * width);
	if (pint == NULL)
	{
		for (i = 0; i < width; i++)
			free(pint[i]);
		free(pint);
		return (NULL);
	}
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
