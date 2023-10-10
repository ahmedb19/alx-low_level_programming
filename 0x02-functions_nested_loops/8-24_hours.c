#include "main.h"

/**
 *jack_bauer - prints every minute of the day of Jack Bauer,
 *starting from 00:00 to 23:59.
 *
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar(i);
			_putchar(i + '0');
			_putchar(':');
			_putchar(j);
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
