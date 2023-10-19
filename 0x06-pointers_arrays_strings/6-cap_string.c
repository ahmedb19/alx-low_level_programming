#include "main.h"

/**
 *cap_string - capitalizes all words of a string.
 *@c: Pointer to a string
 *
 *Return: Pointer to a string
 */
char *cap_string(char *c)
{
	int i = 0, j;
	char a[] = {' ','\t','\n',',',';','.','!','?','"','(',')','{','}'};

	while (s[i] != '\0')
	{
		if (i == 0)
		{
			if (c[i] >= 'a' && c[i] <= 'z')
				c[i] = c[i] - 32;
		} else
		{
			for (j = 0; j <= 12; j++)
			{
				if (a[j] == c[i - 1])
				{
					c[i] = c[i] - 32;
				}
			}
		}
		i++;
	}

	return (c);
}
