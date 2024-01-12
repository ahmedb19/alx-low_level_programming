#include "main.h"

/**
 *s_root - calculates the square root of given values
 *@n: Integer
 *@i: Integer
 *
 *Return: Square root
 */

int s_root(int n, int i)
{
	if (i * i < n)
	{
		s_root(n, i + 1);
	}
	else
		return (i);
}

/**
 *_sqrt_recursion - returns the natural square root of a number.
 *@n: Given number
 *
 *Return: -1 if n doesn't have a natural square root number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (s_root(n, 1));
}
