#include "main.h"

#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width arr
 * @height: height arr
 *
 * Return: pointer
 */


int **alloc_grid(int width, int height)
{
	int **grid2;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	grid2 = malloc(height * sizeof(int *));
	if (grid2 == NULL)
	{
		free(grid2);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid2[i] = malloc(width * sizeof(int));
		if (grid2[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid2[i]);
			free(grid2);
			return (NULL);
		}
	}

	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			grid2[i][j] = 0;
			j++;
		}
		i++;
	}

	return (grid2);
}
