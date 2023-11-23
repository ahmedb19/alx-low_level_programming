#include "main.h"

/**
 *malloc_checked -  allocates memory using malloc.
 *@b: Size
 *
 *Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(sizeof(b));

	if (ptr == 0)
		exit(98);
	return (ptr);
}
