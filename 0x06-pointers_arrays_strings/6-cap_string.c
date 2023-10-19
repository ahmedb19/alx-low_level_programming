#include "main.h"

/**
 *cap_string - capitalizes all words of a string.
 *@c: Pointer to a string
 *
 *Return: Pointer to a string
 */
char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'A' && c[i] <= 'Z')
			c[i] = c[i] + 32;
	}

	return (c);
}
