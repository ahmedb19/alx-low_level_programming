#include "main.h"

/**
*_print_rev_recursion - prints string in reverse.
*@s: String to be printed
*
*/

void _print_rev_recursion(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}

	while (i > 0)
	{
		_putchar(s);
		_print_rev_recursion(*s - 1);
	}
}
