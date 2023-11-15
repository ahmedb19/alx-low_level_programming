#include "main.h"

/**
 *_puts_recursion - prints a string.
 *@s: String to be printed
 *
 */
void _puts_recursion(char *s)
{
	int i = 0;


	if (s[i] != '\0')
		_putchar(s);
	_puts_recursion(s[i + 1]);
}
