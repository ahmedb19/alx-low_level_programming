#include "main.h"

/**
 *_puts_recursion - prints a string.
 *@s: String to be printed
 *
 */
void _puts_recursion(char *s)
{
	_putchar(*s);

	if (*s == '\0')
		_putchar('\n');
	else
		_puts_recursion(s + 1);
}
