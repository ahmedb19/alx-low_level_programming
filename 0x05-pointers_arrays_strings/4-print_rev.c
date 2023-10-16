#include "main.h"

/**
 *print_rev - prints a string in reverse
 *@s: String to be printed
 *
 */
void print_rev(char *s)
{
	int i;

	while (*s != '\0')
		s++;
	for (i = 0; s[i] != s[0]; i--)
		_putchar(s[i]);
	_putchar('\n');
}
