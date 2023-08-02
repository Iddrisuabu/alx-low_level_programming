#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - to delete head node.
 * @head: head of linked list.
 * Return: integer.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head != 0)
	{
		temp = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = temp;
	}
	return (n);

}
