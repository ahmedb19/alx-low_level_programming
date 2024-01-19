#include "main.h"

/**
 *array_range - creates an array of integers.
 *@min: minimum value
 *@max: max value
 *
 * Return: Array of int's
 */

int *array_range(int min, int max)
{
	int l, i;
	int *p;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	p = malloc(sizeof(int) * l);
	if (!p)
		return (NULL);
	for (i = 0; i < l; i++)
		p[i] = min++;
	return (p);
}
