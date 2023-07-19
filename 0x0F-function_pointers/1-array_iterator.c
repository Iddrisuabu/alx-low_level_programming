#include "function_pointers.h"

/**
 * array_iterator - print each element of array.
 * @array: array to be printed.
 * @action: function pointer.
 * @size: size of array.
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size && size > 0; i++)
		{
			action(array[i]);
		}

	}

}

