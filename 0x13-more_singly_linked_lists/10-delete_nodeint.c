#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new = *head;
	listint_t *temp;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = new->next;
		free(new);
		return (1);
	}

	temp = *head;
	while (temp)
	{
		if (i == index)
		{
			new = temp->next;
			temp->next = new->next;
			free(new);
			return (1);
		}

		temp = temp->next;
		i++;
	}

	return (-1);
}
