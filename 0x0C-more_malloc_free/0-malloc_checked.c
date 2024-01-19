#include "main.h"

/**
 *malloc_checked - allocates memory using malloc.
 *@b: size of memory to be allocated.
 *
 */

void *malloc_checked(unsigned int b)
{
	char *a = malloc(b);

	if (a == 0)
		exit(98);

	return (a);
}
