#include "main.h"

/**
 *_pow_recursion - returns the value of x raised to the power of y.
 *@x: Integer
 *@y: Integer
 *
 * Return: -1 if y is lower than 0, else value of x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
