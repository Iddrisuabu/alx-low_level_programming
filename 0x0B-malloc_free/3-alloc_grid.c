#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - memory allocation for 2d arrays.
 * @width: width of array.
 * @height: height of array.
 * Return: integer.
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int a, b, x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		arr[x] = malloc(sizeof(int) * width);
		if (arr[x] == NULL)
		{
			for (y = x; y >= 0; y--)
			{
				free(arr[y]);
			}
			free(arr);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			arr[a][b] = 0;
		}
	}
	return (arr);
}
