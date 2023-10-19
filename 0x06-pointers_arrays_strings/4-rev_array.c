#include "main.h"

/**
 *reverse_array - reverses the content of an array of integers.
 *@a: Array
 *@n: Number of elements of the array
 *
 */
void reverse_array(int *a, int n)
{
	int i, s;

	for (i = 0; i < (n / 2); i++)
	{
		s = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = s;
	}
}
