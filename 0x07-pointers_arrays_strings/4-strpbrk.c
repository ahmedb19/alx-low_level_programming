#include "main.h"

/**
 *_strpbrk - searches a string for any of a set of bytes.
 *@s: 1st string
 *@accept: 2nd String
 *
 *Return: pointer to the byte in s that matches one of the bytes in accept
 *or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == accept[i])
			return (s + i);
	}

	return ('\0');
}
