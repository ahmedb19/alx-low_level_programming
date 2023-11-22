#include "main.h"

/**
 *str_concat - concatenates two strings.
 *@s1: 1st string
 *@s2: string to be concatenated
 *
 *Return: NULL on failure, Otherwise a Pointer to a
 *newly allocated space in memory.
 */

char *str_concat(char *s1, char *s2)
{
	int i, l1, l2;
	char *ptr;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;
	ptr = malloc(sizeof(char) * (l1 + l2) + 1);

	if (ptr == 0)
		return (0);

	for (i = 0; i <= l1 + l2; i++)
	{
		if (i < l1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - l1];
	}
	ptr[j] = '\0';

	return (ptr);
}
