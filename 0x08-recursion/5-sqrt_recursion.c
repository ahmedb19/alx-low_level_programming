#include "main.h"

/**
 *sqr - finds the square root of a number
 *@val: Integer
 *@n: Given Value
 *
 * Return: Square root
 */

int _sqr(int val, int n);

/**
 *_sqrt_recursion - returns the natural square root of a number.
 *@n: Given number
 *
 *Return: -1 if n doesn't have a square root
 */



int _sqr(int val, int n)
{
	int val = 1;

	if (val * val == n)
	{
		return (val);
	} else if (val * val < n)
	{
		return (_sqr(val + 1, n));
	} else
		return (-1);
}

int _sqrt_recursion(int n)
{
	return (_sqr(1, n));

}
