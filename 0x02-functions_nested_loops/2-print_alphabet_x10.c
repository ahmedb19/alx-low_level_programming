#include "main.h"

/**
 *print_alphabet_x10 - Prints 10 times the alphabet in lowercase.
 *
 */

void print_alphabet_x10(void)
{
	char a;
	int i, count = 10;

	for (i = 0; i < count; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
	}
}
