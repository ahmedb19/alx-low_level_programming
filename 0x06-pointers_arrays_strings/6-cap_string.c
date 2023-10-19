#include "main.h"

/**
 *cap_string - capitalizes all words of a string.
 *@c: Pointer to a string
 *
 *Return: Pointer to a string
 */
char *cap_string(char *c)
{
	int i, j;
	char a[] = {' ','\t','\n',',',';','.','!','?','"','(',')','{','}'};

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 32;
		for (j = 0; j <= 12; j++)
		{
			if (a[j] == c[i - 1])
			{
				c[i] = c[i] - 32;
			}
		}
	}

	return (c);
}
