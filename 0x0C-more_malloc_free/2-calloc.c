#include "main.h"

/**
 *_calloc - allocates memory for an array, using malloc.
 *@nmemb: number of elements
 *@size: size of the array
 *
 *Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p = malloc(sizeof(int) * nmemb);

	while (nmemb--)
		p[nmemb] = 0;
	if (size == 0 || nmemb == 0)
		return (NULL);
	if (p == 0)
		return (NULL);

	return (p);
}
