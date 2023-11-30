#include "variadic_functions.h"

/**
 *print_strings - prints strings
 *@separator: string to be printed between the strings
 *@n: Number of strings passed to the function
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *p;

	va_start(args, n);
	p = va_arg(args, char*);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			if (p == NULL)
				printf("(nil)");
			else if (i != n - 1)
				printf("%s%s", p, separator);
			else
				printf("%s\n", p);
		}
	}

	va_end(args);
}
