#include "main.h"

/**
 *more_numbers - prints 10 times the numbers from 0 to 14
 *
 */

void more_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
		if (i == '9')
			_putchar(i + '0');
	}
	_putchar('\n');
}
