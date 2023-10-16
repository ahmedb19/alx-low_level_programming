#include "main.h"

/**
*_strlen - returns the length of a string
*@s: Pointer to a string
*
*Return: length of a string
*/

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		count++;

	return (count);
}

/**
*rev_string - reverses a string.
*@s: String to be reversed
*/

void rev_string(char *s)
{
	int i, length = _strlen(s);
	char rev;

	for (i = 0; i < (length / 2); i++)
	{
		rev = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = rev;
	}
}
