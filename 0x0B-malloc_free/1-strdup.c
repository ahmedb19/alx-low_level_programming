#include "main.h"

/**
 *_strdup - returns a pointer to a newly allocated space in memory,
 *which contains a copy of the string given as a parameter.
 *@str: String to be duplicated.
 *
 *Return: NULL if Str is NULL, else a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	int i;
	char *s = malloc(sizeof(*str));

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];

	return (s);
}
