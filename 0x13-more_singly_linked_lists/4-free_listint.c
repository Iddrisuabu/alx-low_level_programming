#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free linked lists.
 * @head: linked lists.
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);

}
