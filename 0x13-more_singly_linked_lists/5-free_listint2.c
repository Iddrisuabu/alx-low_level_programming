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

	if (head)
	{

		while (*head)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
	}
	else
		return;

	free(*head);
	head = 0;

}
