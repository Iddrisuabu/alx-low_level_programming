#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function to print all all elements of linked list.
 * @h: pointer to the linked list.
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}
