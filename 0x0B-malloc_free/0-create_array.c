#include "main.h"

/**
 *create_array - creates an array of chars, and initializes it
 *with a specific char.
 *@size: Size of the array
 *@c: Character to be initialized
 *
 *Return: Pointer to the array or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	int *a = malloc(size);

	a[0] = c;

	if (size == 0)
	{
		return (NULL);
	}

	return (*a);
}