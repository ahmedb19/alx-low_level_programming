#include "main.h"

/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *@width: Width of 2D array
 *@height: Height of 2D array
 *
 *Return: NULL on failure, else Pointer to a 2D array of integers
 */

int **alloc_grid(int width, int height)
{
	int a**, i, j;
	a = malloc(sizeof(*a) * height);

	if (width <= 0 || height <= 0 || a == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			a[i] = malloc(sizeof(**a) * width);
			if (a[i] == 0)
			{
				while (i--)
					free(a[i]);
				free(a);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				tab[i][j] = 0;
		}
	}
	return (a);
}
