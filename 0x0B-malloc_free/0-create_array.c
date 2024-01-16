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

	if (size == 0)
	{
		return ('\0');
	}
	else
	{
		if (a)
		{
			for (i = 0; i < size; i++)
				a[i] = c;
		}
		else
			return ('\0');
	}
	return (a);
}
