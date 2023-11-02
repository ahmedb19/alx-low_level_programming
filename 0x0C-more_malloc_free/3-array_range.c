#include "main.h"

/**
 *array_range - creates an array of integers
 *@min: minimum values
 *@max: maximum values
 *
 *Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i, j;
	int *s;

	if (min > max)
		return (NULL);
	i = max - min + 1;
	s = malloc(sizeof(int) * i);
	if (!s)
		return (NULL);
	for (j = 0; j < i; j++)
		s[j] = min++;
	return (s);
}
