#include "lists.h"

/**
 *_strlen - returns the length of a string
 *@s: Pointer to a string
 *
 *Return: length of a string
 */

int _strlen(char *s)
{
	int count;

	if (!s)
		return (0);
	for (count = 0; *s != '\0'; s++)
		count++;

	return (count);
}

/**
 *print_list - prints all the elements of list_t
 *@h: list
 *
 *Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
