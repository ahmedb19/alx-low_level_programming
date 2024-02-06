#include "lists.h"

/**
 *add_node_end - adds a new node at the end of a list_t list.
 *@head: Address pointer to the head of the node
 *@str: field of node
 *
 * Return: Address of the new element, otherwise NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tail = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !tail)
		return (NULL);
	if (str)
	{
		tail->str = strdup(str);
		if (!tail->str)
		{
			free(tail);
			return (NULL);
		}
		tail->len = _strlen(tail->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = tail;
	}
	else
		*head = tail;
	return (tail);
}
