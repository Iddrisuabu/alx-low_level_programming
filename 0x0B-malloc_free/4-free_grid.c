#include "main.h"
#include <stdlib.h>

/**
 * free_grid - to free allocated memory to an array.
 * @height: height of array
 * @grid: array to be freed.
 * Return: void.
 */

void free_grid(int **grid, int height)
{
	int y = 0;

	while (y < height)
	{
		free(grid[y]);
		y++;
	}

	free(grid);

}
