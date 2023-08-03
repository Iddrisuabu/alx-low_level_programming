#include "lists.h"

/**
 * sum_listint - to sum data of linked lists.
 * @head: head of linked list.
 * Return: integer.
 */

int sum_listint(listint_t *head)
{
	int sum = 0, i = 0;

	while (head)
	{
		i = head->n;
		sum += i;
		head = head->next;
	}
	return (sum);
}
