#include "variadic_functions.h"

/**
 *print_numbers - prints numbers
 *@separator: string to be printed between numbers
 *@n: number of arguments
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i, s;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, int);
		if (separator != NULL && i != n)
		{
			printf("%d%s", s, separator);
		} else
			printf("%d\n", s);
	}

	va_end(args)
}
