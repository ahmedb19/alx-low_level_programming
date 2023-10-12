#include "main.h"

/**
 *print_diagonal - print a diagonal line
 *@n: number of lines
 */

void print_diagonal(int n)
{
	int a, s;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (a = 1; a <= n; a++)
		{
			for (s = 1; s <= a; s++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
