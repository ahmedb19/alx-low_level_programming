#include "main.h"

/**
 *_strlen_recursion - Finds string length
 *@g: String
 *
 *Return: String length
 */

int _strlen_recursion(char *g)
{
	int i = 0;

	if (*g > '\0')
		i += _strlen_recursion(g + 1) + 1;

	return (i);
}

/**
 *is_palindrome - returns 1 if a string is a palindrome.
 *@s: String
 *
 *Return: Returns 1 if s is palindrome, Otherwise 0
 */

int is_palindrome(char *s)
{
	int i = 0;
	int len = _strlen_recursion(s);

	if (i >= len - 1)
		return (1);
	else if (s[i] == s[len - 1])
	{
		i += i;
		len -= 1;
		return (int is_palindrome(char *s));
	}
}
