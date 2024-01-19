#include "main.h"

/**
 *_memset - fills memory with a constent byte
 *@s: pointer to put the constant
 *@b: constant
 *@n: max bytes to use
 *
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
		*s++ = b;

	return (p);
}

/**
 *_calloc - allocates memory for an array, using malloc.
 *@nmemb: Array length
 *@size: Size of each element
 *
 * Return: Pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;

	if (size == 0 || nmemb == 0)
		return (NULL);

	a = malloc(sizeof(int) * nmemb);

	if (a == 0)
		return (NULL);

	_memset(a, 0, sizeof(int) * nmemb);

	return (a);
}
