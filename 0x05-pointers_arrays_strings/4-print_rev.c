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
*print_rev - prints a string in reverse
*@s: String to be printed
*
*/

void print_rev(char *s)
{
	int i;
	int length = _strlen(s);
	char rev;

	for (i = 0; i < (length / 2); i++)
	{
		rev = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = rev;
		_putchar(rev);
	}
	_putchar('\n');
}
