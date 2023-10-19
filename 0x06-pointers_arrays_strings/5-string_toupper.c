#include "main.h"

/**
 *string_toupper - Changes all lowercase letters of a string to uppercase.
 *@c: Pointer to a string
 *
 *Return: 0
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] - 32;
		}
	}

	return (c);
}
