#include "lists.h"

/**
 * get_nodeint_at_index - function that returns nth node of a linked list.
 * @head: head of linked list.
 * @index: the index of the node, starting at 0.
 * Return: index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head)
	{
		while (head)
		{
			if (i == index)
				return (head);

			head = head->next;
			i++;
		}
	}

	return (NULL);
}
