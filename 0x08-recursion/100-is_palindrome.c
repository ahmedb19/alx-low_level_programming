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
	int len = _strlen_recursion(s);

	if (len == 0 || len == 1)
	{
		return (1);
	}

	return (check_pal(s, 0, len - 1));
}

/**
 *check_pal - checks to see if a string is palindrome
 *@str: String
 *@a: Starting index
 *@b: Ending index
 *
 *Return: 1 if the string is palindrome otherwise 0
 */

int check_pal(char *str, int a, int b)
{
	if (a >= b)
	{
		return (1);
	} else if (str[a] == str[b])
	{
		return (check_pal(str, a + 1, b - 1));
	} else
		return (0);
}
