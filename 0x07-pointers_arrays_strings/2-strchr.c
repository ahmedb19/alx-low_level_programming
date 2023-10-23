#include "main.h"

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
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return ('\0');
}
