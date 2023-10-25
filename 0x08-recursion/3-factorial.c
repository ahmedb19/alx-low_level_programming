#include "main.h"

/**
 *factorial - returns the factorial of a given number.
 *@n: Integer
 *
 *Return: factorial of n
 */

int factorial(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	else
	{
		i = n * factorial(n - 1);
		return (i);
	}
	return (0);
}
