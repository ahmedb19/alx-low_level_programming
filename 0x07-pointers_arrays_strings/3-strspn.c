#include "main.h"
#include <stdbool.h>
#include <stddef.h>

/**
 *_strspn - gets the length of a prefix substring.
 *@s: 1st string
 *@accept: 2nd string
 *
 *Return: number of bytes in the initial segment of s
 *which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	size_t sa = 0;
	bool match = false;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				match = true;
		}
		if (!match)
		{
			break;
		} else
			sa++;
	}
	return (sa);
}
