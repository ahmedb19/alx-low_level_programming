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
	char *a;

	if (size == 0)
	{
		return ('\0');
	}
	else
	{
		a = malloc(size);

		if (a == 1)
		{
			for (i = 0; i < size; i++)
				a[i] = c;
			return (a);
		}
		else
			return ('\0');
	}
}
