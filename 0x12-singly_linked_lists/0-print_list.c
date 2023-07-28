#include "lists.h"
#include <stdio.h>

/**
 * print_list - that prints all the elements of list_t.
 * @h: pointer to the list_t.
 * Return: number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t W = 0;

	while (h != 0)
	{
		if (h->str == 0)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		W++;
	}
	return (W);
}
