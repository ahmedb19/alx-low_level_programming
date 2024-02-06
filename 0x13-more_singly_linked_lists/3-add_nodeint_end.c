#include "lists.h"

/**
 *add_nodeint_end - adds a new node at the end of a listint_t list.
 *@head: Ptr to first node
 *@n: Value for new node
 *
 * Return: address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tail = malloc(sizeof(listint_t));
	listint_t *node;

	if (!head || !tail)
		return (NULL);

	tail->next = NULL;
	tail->n = n;
	if (!*head)
		*head = tail;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = tail;
	}
	return (tail);
}
