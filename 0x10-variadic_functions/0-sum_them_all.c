#include "variadic_functions.h"

/**
 *sum_them_all - returns the sum of all its parameters.
 *@n: Number of parameters
 *
 *Return: sum of all its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int a = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int s = va_arg(args, int);
		a += s;
	}
	va_end(args);

	return (a);
}
