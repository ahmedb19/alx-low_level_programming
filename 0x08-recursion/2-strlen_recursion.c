#include "main.h"

/**
 *_strlen_recursion - returns the length of a string.
 *@s: String
 *
 *Return: length of @s
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		i++;
	}
	return (i);
}
