#include "3-calc.h"

/**
 *op_add - adds two integers
 *@a: First int
 *@b: Second int
 *
 *Return: The sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - substracts two integers
 *@a: First int
 *@b: Second int
 *
 *Return: The difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - divides two integers
 *@a: First integer
 *@b: Second integer
 *
 *Return: division of @a by @b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - modulo two integers
 *@a: First integer
 *@b: Second integer
 *
 *Return: Remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
