#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free linked lists.
 * @head: linked lists.
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	if (head == 0)
	{
		free(*head);
	}
	head = 0;

}
