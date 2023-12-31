#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - to add a new node to the list at the beginning.
 * @head: head pointer to linked list.
 * @n: integer.
 * Return: integer
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head != NULL)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = *head;

		*head = new_node;
		return (new_node);
	}

	return (NULL);
}
