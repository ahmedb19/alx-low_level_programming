#include "main.h"

/**
 *more_numbers - prints 10 times the numbers from 0 to 14
 *
 */

void more_numbers(void)
{
	int i, j, s;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			s = j;
			if (j > 9)
			{
				_putchar(1 + 48);
				s = j % 10;
			}
				_putchar(s + 48);
		}
		_putchar('\n');
	}
}
