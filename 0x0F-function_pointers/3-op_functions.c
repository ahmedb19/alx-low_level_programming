#include "3-calc.h"

/**
 *op_add - adds 2 integers
 *@a: 1st Integer
 *@b: 2nd Integer
 *
 *Return: Sum of @a and @b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - substracts 2 integers
 *@a: 1st Integer
 *@b: 2nd Integer
 *
 *Return: Difference between @a and @b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplies 2 integers
 *@a: 1st integer
 *@b: 2nd integer
 *
 *Return: Product of @a and @b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - divides 2 integers
 *@a: 1st integer
 *@b: 2nd integer
 *
 *Return: result of the division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - returns the remainder of the division of 2 integers
 *@a: 1st integer
 *@b: 2nd integer
 *
 *Return: remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
