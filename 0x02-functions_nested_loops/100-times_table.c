#include "main.h"

/**
 *print_times_table - prints the n times table
 *@n: Given Int
 */
void print_times_table(int n)
{
	int i, j, k;
	if (n > 15 || n < 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; n++)
		{
			for (j = i; j < n; j++)
			{
				k = j * i;
				_putchar(k);
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
