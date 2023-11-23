#include "main.h"

/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *@width: width of the grid
 *@height: height of the grid
 *
 *Return: pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int s1, s2, **ptr;

	ptr = malloc(sizeof(*ptr) * height);

	if (width == 0 || height == 0 || ptr == 0)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc(sizeof(*ptr) * height);
		for (s1 = 0; s1 < height; s1++)
		{
			ptr[s1] = malloc(sizeof(**ptr) * width);

			if (ptr[s1] == 0)
			{
				while (s1--)
					free(ptr[s1]);
				free(ptr);
				return (NULL);
			}
			for (s2 = 0; s2 < width; s2++)
				ptr[s1][s2] = 0;
		}
	}

	return (ptr);

}
