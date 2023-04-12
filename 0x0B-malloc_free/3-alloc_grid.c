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
	int **pint = (int **)malloc(sizeof(int *) * width);;

	if (width <= 0 || height <= 0)
		return (NULL);
	*pint = (int *)malloc(sizeof(int) * height);
	for (w = 0; w < width; w++)
		pint[w] = (*pint + height * w);
	if (pint == NULL)
	{
		return (NULL);
	}
	while (i < width)
	{
		j = 0;
		while (j < height)
		{
			pint[i][j] = 0;
			j++;
		}
		i++;
	}
	return (pint);
}
