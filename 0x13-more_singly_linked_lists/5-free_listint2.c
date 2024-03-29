#include "lists.h"

/**
 *free_listint2 - frees a listint_t list
 *@head: Ptr to the 1st node
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *node, *s;

	if (!head)
		return;

	node = *head;
	while (node)
	{
		s = node;
		node = node->next;
		free(s);
	}
	*head = NULL;
}
