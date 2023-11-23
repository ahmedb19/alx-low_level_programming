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
	int s1, s2;
	int **ptr;

	if (width == 0 || height == 0)
	{
		return (NULL);
	} else
	{
		*ptr = malloc(sizeof(char) * (height + width));
		if (*ptr == 0)
			return (0);
		for (s1 = 0; s1 < width; s1++)
		{
			*ptr[s1][0] = {0, 0};
			for (s2 = 0; s2 < height; s2++)
			{
				*ptr[0][s2] = {0, 0};
			}
		}
	}
	return (*ptr);

}
