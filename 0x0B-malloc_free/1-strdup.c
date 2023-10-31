#include "main.h"

/**
 *_strdup - returns a pointer to a newly allocated space in memory.
 *@str: String
 *
 *Return: pointer to the duplicated string, Otherwise NULL
 *if insufficient memory was available
 */

char *_strdup(char *str)
{
	int i, s;
	char *a;

	if (str == NULL)
		return (NULL);
	for (s = 0; str[s] != '\0'; s++)
		;

	a = malloc(s * sizeof(*str) + 1);

	if (a == 0)
		return (NULL);

	for (i = 0; i < s; i++)
		a[i] = str[i];


	return (a);
}
