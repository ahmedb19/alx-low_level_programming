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

	s = n % 10;
	_putchar(s);
	_putchar('\n');

	return (s);
}
