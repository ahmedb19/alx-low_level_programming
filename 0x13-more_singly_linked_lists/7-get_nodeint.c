#include "lists.h"

/**
 *get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *@head: Ptr to the 1st node
 *@index: Index of the node
 *
 * Return: Ptr to node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int n;

	for (node = head, n = 0; node && n < index; node = node->next, n++)
		;
	return (node);
}
