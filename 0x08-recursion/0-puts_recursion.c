#include "main.h"

/**
 *_puts_recursion - prints a string
 *@s: String to be printed
 * 
 */

void _puts_recursion(char *s)
{
	if (s != '\0')
	{
		_putchar(s);
		return (_puts_recursion(s + 1));
	}
	else
		_putchar("\n");
}
