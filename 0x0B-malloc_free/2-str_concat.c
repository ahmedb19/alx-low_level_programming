#include "main.h"

/**
 *str_concat - concatenates two strings.
 *@s1: 1st string
 *@s2: string to be concatenated
 *
 *Return: NULL on failure, Otherwise a Pointer to a newly allocated space in memory.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, l1, l2;
	char *ptr;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;
	ptr = malloc(sizeof(char) * (l1 + l2) + 2);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	if (s1[i] == '\0')
	{
		for (j = i; s2[j] != '\0'; j++)
			ptr[j] = s2[j];
	}
	ptr[j + 1] = '\0';

	return (ptr);
}
