#include "main.h"

/**
 *_puts_recursion - prints a string.
 *@s: String to be printed
 *
 */

void _puts_recursion(char *s)
{
	if (_put_recursion("") != 1)
		_putchar('\0');
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
		if (*s == '\0')
		{
			_putchar('\n');
		}
	}
}
