#include "function_pointers.h"

/**
 * int_index - to searche for an integer.
 * @size: size of array.
 * @array: array used
 * @cmp: function pointer
 *
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != 0 && cmp != 0)
	{
		for (i = 0; i < size && size > 0; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
