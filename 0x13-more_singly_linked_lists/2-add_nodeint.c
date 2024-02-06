#include "lists.h"

/**
 *add_nodeint - adds a new node at the beginning of a listint_t list.
 *@head: Ptr to the 1st node
 *@n: Value for new node
 *
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!head || !new)
		return (NULL);

	new->next = NULL;
	new->n = n;
	if (*head)
		new->next = *head;
	*head = new;
	return (new);
}
