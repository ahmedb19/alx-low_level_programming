#include "lists.h"

/**
 *add_node - adds a new node at the beginning of a list_t list.
 *@head:  address of ptr to the head of node
 *@str: field of node
 *
 * Return: address of the new element otherwise NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newh = malloc(sizeof(list_t));

	if (!head || !newh)
		return (NULL);
	if (str)
	{
		newh->str = strdup(str);
		if (!new->str)
		{
			free(newh);
			return (NULL);
		}
	}
	return (newh);
}
