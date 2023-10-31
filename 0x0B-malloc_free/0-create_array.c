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
	char *a = malloc(size);

	if (size == 0 || a == 0)
		return (0);

	while (size--)
		a[size] = c;

	return (a);
}
