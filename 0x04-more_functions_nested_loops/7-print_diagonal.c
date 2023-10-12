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
		for (a = 0; a < n; a++)
		{
			for (s = 0; s < a; s++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
