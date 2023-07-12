#include "main.h"
#include <stdlib.h>

/**
<<<<<<< HEAD
 * free_grid - to free allocated memory to an array.
 * @height: height of array
 * @grid: array to be freed.
=======
 * free_grid - to free allocated memory to an array
 * @grid: array to be freed.
 * @height: height of the array.
>>>>>>> 03b866dc3a63273f64d2b08b132b0fb4795bd204
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

<<<<<<< HEAD
	free(grid);

=======
>>>>>>> 03b866dc3a63273f64d2b08b132b0fb4795bd204
}
