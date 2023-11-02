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
	char *g = s;

	while (n--)
		*s++ = b;
	return (g);
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
	void *p;

	p = malloc(sizeof(int) * nmemb);

	if (size == 0 || nmemb == 0)
		return (NULL);
	if (p == 0)
		return (NULL);

	_memset(p, 0, sizeof(int) * nmemb);

	return (p);
}
