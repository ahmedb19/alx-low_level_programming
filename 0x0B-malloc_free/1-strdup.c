#include "main.h"

/**
 *_strdup - duplicates a string in a newly allocated space in memory
 *@str: Given string
 *
 *Return: Pointer to the duplicated string in memory, or NULL if str = NULL
 */

char *_strdup(char *str)
{
	int i = 0, j;
	char *s;

	if (str == NULL)
	{
		return ('\0');
	}
	else
	{
		for (j = 0; str[j] != '\0'; j++)
			;
		s = malloc(sizeof(char) * j + 1);

		if (s)
		{
			while (str[i] != '\0')
			{
				s[i] = str[i];
				i++;
			}
		}
		else
		{
			return ('\0');
		}
		s[i] = '\0';
		return (s);
	}
}
