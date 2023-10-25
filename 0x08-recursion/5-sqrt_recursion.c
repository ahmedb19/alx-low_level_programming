#include "main.h"

/**
 *_sqrt_recursion - returns the natural square root of a number.
 *@n: Given number
 *
 *Return: -1 if n doesn't have a square root
 */

int _sqrt_recursion(int n)
{
	int a = 1;

	if (a * a == n)
	{
		return(a);
	} else if (a * a < n)
	{
		return (_sqrt_recursion(n));
	} else
		return (-1);
}
