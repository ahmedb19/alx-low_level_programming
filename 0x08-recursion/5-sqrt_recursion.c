#include "main.h"

/**
 *test - finds the square root of n
 *@n: Integer
 *@i: Integer
 *
 *Return: square root of n
 */
int test(int n, int i)
{
	if (i * i <= n)
	{
		if (i * i == n)
			return (i);
		else
			i++;
	}
	return (test(n, i));
}

/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: Integer
 *
 *Return: Natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (test(n, 1));
}
