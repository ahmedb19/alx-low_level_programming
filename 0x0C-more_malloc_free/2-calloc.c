#include "main.h"

/**
 *_calloc - allocates memory for an array, using malloc
 *@nmemb: number of elements
 *@size: Size to be allocated
 *
 *Return: pointer to the allocated memory, or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(sizeof(int) * nmemb);

	if (ptr == 0)
		return (NULL);

	if (ptr != NULL)
	{
		for (i = 0; i < nmemb; i++)
			ptr[i] = 0;
	}

	return (NULL);
}
