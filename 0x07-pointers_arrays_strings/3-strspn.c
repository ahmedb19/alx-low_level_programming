#include "main.h"

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
	unsigned int i, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (accept[i] == s[i])
			j++;
	}
	return (j);
}
