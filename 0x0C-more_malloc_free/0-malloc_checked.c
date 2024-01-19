#include "main.h"

/**
 *malloc_checked - allocates memory using malloc.
 *@b: size of memory to be allocated.
 *
 * Return: Pointer to new allocated memory, otherwise normal process
 * termination with a status value of 98.
 */

void *malloc_checked(unsigned int b)
{
	char *a = malloc(b);

	if (a == 0)
		exit(98);

	return (a);
}
