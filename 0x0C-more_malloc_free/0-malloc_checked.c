#include "main.h"

/**
 *malloc_checked - allocates memory using malloc.
 *@b: size of memory to be allocated.
 *
 */

void *malloc_checked(unsigned int b)
{
	char *a = malloc(sizeof(b));

	if (a)
	{
		return (a);
	}
	else
		exit(98);
}
