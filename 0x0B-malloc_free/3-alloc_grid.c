#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *alloc_grid - create a 2D array
 *@width: rows
 *@height: columns
 *
 *Return:NULL on failure or 0 or negative dimensions
 */
int **alloc_grid(int width, int height)
{
	int i, j, w;
	int **pint;

	if (width <= 0 || height <= 0)
		return (NULL);
	pint = malloc(sizeof(int) * width);
	for (w = 0; w < width; w++)
		pint[w] = malloc(sizeof(int) * height);
	if (pint == NULL)
	{
		free(pint);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			pint[i][j] = 0;
		}
	}
	return (pint);
}
