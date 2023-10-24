#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - prints the sum of the two diagonals
 *of a square matrix of integers.
 *@a: 2D Array
 *@size: Size of array
 */

void print_diagsums(int *a, int size)
{
	int i, f1 = 0, f2 = 0;

	for (i = 0; i < size; i++)
	{
		f1 += a[i];
		f2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
