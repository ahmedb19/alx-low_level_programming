#include "main.h"

/**
 *prime_ch - checks if n is a prime number
 *@n: Number to be checked
 *@x: test value
 *
 *Return: 1 if n is prime or 0
 */
int prime_ch(int n, int x)
{
	else if (n % x == 0)
		return (0);
	else if (x >= n / 2)
		return (1);
	else
		return (prime_ch(n, x + 1));
}

/**
 *is_prime_number - finds out if n is a prime number.
 *@n: Integer to be checked
 *
 *Return: 1 if @n is a prime number, otherwise 0
 */

int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	} else if (n == 2)
		return (1);
	else
		return (prime_ch(n, 1));
}
