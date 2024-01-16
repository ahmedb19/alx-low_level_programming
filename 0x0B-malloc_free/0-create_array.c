#include "main.h"

/**
 *create_array - creates an array of chars, and initializes it
 *with a specific char.
 *@size: Size of the array
 *@c: Specific char
 *
 *Return: Pointer to the memory location.
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return ('\0');
	else
	{
		int *a = malloc(size);
		int i;

		for (i = 0; i < size; i++)
			a[i] = c;
		return (a);
	}
}
