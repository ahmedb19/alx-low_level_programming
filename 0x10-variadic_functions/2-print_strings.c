#include "variadic_functions.h"

/**
 *print_strings - prints strings
 *@separator: string to be printed between the strings
 *@n: number of strings passed to the function
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = n;
	char *s;
	va_list args;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	while (i--)
		printf("%s%s", (s = va_arg(args, char *)) ? s : "(nil)",
				i ? (separator ? separator : "") : "\n");

	va_end(args);
}
