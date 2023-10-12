#include "main.h"

/**
 *print_diagonal - draws a diagonal line on the terminal
 *@n: number of diagonal lines
 *
 */

void print_diagonal(int n)
{
	int a, f;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (a = 1; a <= n; a++)
		{
			for (f = 1; f <= a; f++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
