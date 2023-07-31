#include "lists.h"

/**
 * listint_len - function to print all all elements of linked list.
 * @h: pointer to the linked list.
 * Return: number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != 0)
	{
		i++;
		h = h->next;
	}

	return (i);
}
