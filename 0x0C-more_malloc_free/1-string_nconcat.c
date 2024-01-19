#include "main.h"

/**
 *string_nconcat - concatenates two strings
 *@s1: 1st string
 *@s2: 2nd string
 *@n: n bytes of s2
 *
 * Return: Pointer to newly allocated space otherwise NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ss;
	unsigned int i, j, l1, l2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;
	ss = malloc(l1 + n + 1);
	if (ss == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		ss[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		ss[i] = s2[j];
		i++;
	}
	ss[i] = '\0';
	return (ss);
}
