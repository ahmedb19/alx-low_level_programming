#include "variadic_functions.h"
#include <stdio.h>

/**
 *print_strings - prints strings
 *@separator: string to be printed between the strings
 *@n: number of strings passed to the function
 *@...: strings to print
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list arg;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(arg, n);
	while (i--)
		printf("%s%s", (str = va_arg(arg, char *)) ? str : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end(arg);
}
