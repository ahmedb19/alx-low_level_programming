#include "main.h"
#include <stddef.h>

/**
 *_strchr - locates a character in a string.
 *@c: Character to be located
 *@s: String
 *
 *Return: Pointer to the first occurence of the char c in string s
 *Otherwise NULL0
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
