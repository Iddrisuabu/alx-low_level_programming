#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - to add a new node to the list at the end.
 * @head: head pointer to linked list.7
 * @n: integer.
 * Return: integer
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node, *temp;

	end_node = malloc(sizeof(listint_t));
	if (end_node == NULL)
		return (NULL);

	end_node->n = n;
	end_node->next = NULL;

	if (*head != NULL)
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;

		temp->next = end_node;
		return (temp);
	}

	else
	{
		*head = end_node;
		return (*head);
	}

	return (NULL);
}
