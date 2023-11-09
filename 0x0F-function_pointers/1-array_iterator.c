#include "function_pointers.h"

/**
 *array_iterator - executes a function given as a parameter on
 *each element of an array.
 *@array: Int array
 *@size: Array size
 *@action: Function pointer
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *e = array + size - 1;

	if (array && size && action)
		while (array <= e)
			action(*array++);
}
