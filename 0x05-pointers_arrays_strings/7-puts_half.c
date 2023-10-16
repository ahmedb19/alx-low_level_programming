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
*puts_half - prints half of a string.
*@str: string to be printed
*
*/

void puts_half(char *str)
{
	int i, length = _strlen(str);

	length += 1;
	for (i = length / 2; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
