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

	if (size != 0)
	{
		ptr = malloc(sizeof(size));

		while (--size)
			ptr[size] = c;
	} else
		return (NULL);

	return (ptr);
}
