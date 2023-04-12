#include "main.h"
#include <strlib.h>
/**
 *free_grid - deallocate memomry space
 *@grid: the grid
 *@height: dimension
 *
 *Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
