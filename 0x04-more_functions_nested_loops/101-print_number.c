#include "main.h"

/**
 *print_number - prints an integer
 *@n: Integer to be printed
 *
 */
void print_number(int n)
{
	unsigned int s = n;

	if (n < 0)
	{
		_putchar('-');
		s = -s;
	}
	if ((s / 10) > 0)
		print_number(s / 10);
	_putchar((s % 10) + 48);
}
