#include "main.h"

/**
 *_strdup - duplicates a string in a newly allocated space in memory
 *@str: Given string
 *
 *Return: Pointer to the duplicated string in memory, or NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *s = (malloc(sizeof(str)));
	unsigned int i;

	if (*str == '\0')
	{
		return ('\0');
	}
	else
	{
		if (s)
		{
			for (i = 0; str[i] != '\0'; i++)
				s[i] = str[i];
		}
		else
		{
			return ('\0');
		}
	}
	return (s);
}
