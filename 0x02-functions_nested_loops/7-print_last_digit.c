#include "main.h"

/**
 *print_last_digit - Prints the last digit of a number
 *@n: Int to be checked
 *
 * Return: the value of last digit
 */

int print_last_digit(int n)
{
	int s;

	if (n < 0)
		s = -1 * (n % 10);
	else
		s = n % 10;
	_putchar('0' + s);

	return (s);
}
