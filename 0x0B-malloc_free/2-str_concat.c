#include "main.h"

/**
 *str_concat - concatenates two strings
 *@s1: 1st string
 *@s2: 2nd string
 *
 *Return: Pointer on success Otherwise NULL
 */

char *str_concat(char *s1, char *s2)
{
	int l1, l2, s, i;
	char *a;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;
	s = l1 + l2 + 1;
	a = malloc(sizeof(char) * s);
	if (a == 0)
		return (0);

	for (i = 0; i < l1 + l2; i++)
	{
		if (i < l1)
			a[i] = s1[i];
		else
			a[i] = s2[i - l1];
	}
	a[i] = '\0';

	return (a);
}
