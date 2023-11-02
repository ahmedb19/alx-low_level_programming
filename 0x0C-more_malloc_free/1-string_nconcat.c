#include "main.h"
#include <stdio.h>

/**
 *string_nconcat - concatenates two strings
 *@s1: 1st String
 *@s2: 2nd String
 *@n: Number of bytes from the 2nd string
 *
 *Return: Pointer to a newly allocated space, otherwise NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	p = malloc(i + n + 1);
	if (p == NULL)
		return (NULL);

	for (k = 0; s1[k] != '\0'; k++)
		p[k] = s1[k];
	for (l = 0; l < n; l++)
	{
		p[k] = s2[l];
		k++;
	}

	p[k] = '\0';
	return (p);
}
