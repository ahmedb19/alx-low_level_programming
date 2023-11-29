#include "function_pointers.h"

/**
 *int_index - searches for an integer
 *@array: Array
 *@size: Size of the array
 *@cmp: pointer to function
 *
 *Return: Index to the first element for which the cmp function
 *does not return 0, otherwise -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
