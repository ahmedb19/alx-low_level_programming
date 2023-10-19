#include "main.h"

/**
 *leet - encodes a string into 1337
 *@a: syring to be encoded
 *
 *Return: Encoded string
 */

char *leet(char *a)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[j] == s1[j])
			{
				a[i] = s2[j];
			}
		}
	}
	return (a);
}
