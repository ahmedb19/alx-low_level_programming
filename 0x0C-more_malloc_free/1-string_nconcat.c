#include "main.h"

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
	int i, j, k;
	char *p;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	p = malloc((i + (j - n)) * sizeof(char) + 1);

	if (p == 0)
		return (0);

	for (k = 0; k <= i + n; k++)
	{
		if (k < i)
			p[k] = s1[k];
		else
			p[k] = s2[k - i];
	}
	p[k] = '\0';

	return (p);
}
