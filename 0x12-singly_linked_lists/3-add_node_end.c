#include "lists.h"
#include <stdlib.h>
#include <string.h>


/**
 * _strlen - find the length of the string.
 * @s: string used.
 * Return: integer.
 */
int _strlen(const char *s)
{
	int len;

	for (len = 0; *s != 0; s++)
		len++;

	return (len);
}

/**
 * add_node_end - to add a new node at the end.
 * @head: head pointer to node.
 * @str: string to be added.
 * Return: new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node, *temp;
	unsigned int len = 0;

	len = _strlen(str);

	end_node = malloc(sizeof(list_t));
	if (end_node == NULL)
		return (NULL);

	end_node->str = strdup(str);
	end_node->len = len;
	end_node->next = NULL;

	if (*head != 0)
	{
		temp = *head;
		while (temp->next)
		{
			temp = temp->next;
		}
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
