#include "main.h"

/**
 *_strlen_recursion - returns the length of a string.
 *@s: String
 *
 *Return: Length of a string.
 */

int _strlen_recursion(char *s)
{
	int i;

	if (*s > '\0')
		i = _strlen_recursion(s + 1) + 1;

	return (i);
}
