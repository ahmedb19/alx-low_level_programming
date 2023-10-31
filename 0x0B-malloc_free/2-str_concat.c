#include "main.h"

/**
 *str_concat - concatenates two strings
 *@s1: 1st string
 *@s2: 2nd string
 *
 *Return: pointer to a newly allocated space in memory which contains
 *the contents of s1, followed by the contents of s2, and null terminated.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *a;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	a = malloc((i + j) * sizeof(char) + 1);

	if (a == 0)
		return (0);

	for (k = 0; k <= i + j; k++)
	{
		if (k < i)
			a[k] = s1[k];
		else
			a[k] = s2[k - i];
	}
	a[k] = '\0';

	return (a);
}
