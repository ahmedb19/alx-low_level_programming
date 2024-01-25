#include "function_pointers.h"

/**
 *int_index - searches for an integer
 *@array: Array
 *@size: size of the array
 *@cmp: function pointer
 *
 *Return: -1 if size <= 0, else 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
