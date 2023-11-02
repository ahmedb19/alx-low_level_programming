#include "main.h"

/**
 *_memset - fills memory with a constant byte
 *@s: Pointer to a string
 *@b: constant byte
 *
 *Return: Pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

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

	_memset(p, 0, sizeof(int) * nmemb);

	return (p);
}
