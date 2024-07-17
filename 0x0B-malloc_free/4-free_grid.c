#include "main.h"

#include <stdlib.h>

/**
 * free_grid - frees a two dimensional grid.
 * @grid: multidimensional intt arr
 * @height: grid height
 *
 * Return: none
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}

		free(grid);
	}
}
