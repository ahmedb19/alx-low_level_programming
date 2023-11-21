#include "main.h"

/**
 *create_array - creates an array of chars
 *@size: size of the array
 *@c: specific char
 *
 *Return: NULL if size is 0, else a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	int i = 0;

	if (size == 0)
		return (NULL);
	else
	{
		ptr = malloc(sizeof(size));
		
		for (i = 0; i < size; i++)
			ptr[i] = c;
	}

	return (ptr);
}
