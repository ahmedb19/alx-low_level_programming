#include "main.h"
#include <stdio.h>

/**
 *print_array - Prints n elements of an array of integers.
 *@n: number of elements to be printed.
 *@a: array of integers
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i != n)
			printf("%d, ", a[i]);
		else if (i == n)
		{
			printf("%d", a[i]);
			break;
		}
	}
	printf("\n");
}
