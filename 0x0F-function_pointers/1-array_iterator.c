#include "function_pointers.h"

/**
 *array_iterator - executes a function given as a parameter
 *on each element of an array.
 *@array: Array
 *@size: Size of the array
 *@action: Pointer to the function you need to use
 *
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i <=  array + size - 1; i++)
		{
			action(*array);
		}
	}
}
