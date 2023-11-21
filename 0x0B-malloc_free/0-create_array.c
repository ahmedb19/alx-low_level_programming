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
	unsigned int i = 0;

	if (size != 0)
	{
		ptr = malloc(sizeof(size));

		ptr[0] = c;
	} else
		return (NULL);

	return (ptr);
}
