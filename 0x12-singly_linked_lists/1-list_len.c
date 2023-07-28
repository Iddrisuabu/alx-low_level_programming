#include "lists.h"

/**
 * list_len - function that returns number of elements in linked list.
 * @h: linked list.
 * Return: number of elementss in list.
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);

}
