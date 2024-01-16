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
	unsigned int i;
	char *a = malloc(size);

	for (i = 0; i < size; i++)
	{
		if (size == 0)
		{
			return ('\0');
		}
		else
		{
			a[i] = c;
		}
	}
	return (a);
}
