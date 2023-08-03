#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: linked list head.
 * @idx: index of the list where the new node should be added.
 * @n: integer.
 * Return: address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 1;
	listint_t *newnode, *temp = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode == 0)
		return (NULL);

	newnode->n = n;
	if (idx > 0)
	{
		while (temp)
		{
			if (count == idx)
			{
				newnode->next = temp->next;
				temp->next = newnode;
				return (newnode);
			}
		temp = temp->next;
		count++;

		}
		if (idx == 0)
			return (NULL);
	}

	else
	{
		newnode->next = *head;
		*head = newnode;
	}

		return (newnode);

	return (NULL);

}
