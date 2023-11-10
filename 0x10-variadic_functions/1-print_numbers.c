#include "variadic_functions.h"

/**
 *print_numbers - prints numbers
 *@separator: string to be printed between numbers
 *@n: number of integers passed to the function
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
		printf("%d%s", va_arg(args, int),
			i ? (separator ? separator : "") : "\n");
	va_end(args);
}
