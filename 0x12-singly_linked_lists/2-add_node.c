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
 * add_node - ton add a new node at the beginning.
 * @head: head pointer to node.
 * @str: string to be added.
 * Return: new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	len = _strlen(str);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = *head;

	(*head) = new_node;

	return (new_node);

}
