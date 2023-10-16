#include "main.h"

/**
 *_puts - Prints a string, to stdout.
 *@str: prints a string.
 *
 */
void _puts(char *str)
{
	int i;

	while (*str != '\0')
	{
		for (i = 0; i < str; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
}
