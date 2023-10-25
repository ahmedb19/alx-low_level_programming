#include "main.h"

/**
 *optimus_prime - checks if optimus is alive
 *@n: Given Value
 *@m: Magical Int
 *
 *Return: 1 if alive, otherwise 0
 */

int optimus_prime(int n, int m);

int optimus_prime(int n, int m)
{
	if (m >= n && n > 1)
	{
		return (1);
	} else if (n % m == 0 || n <= 1)
	{
		return (0);
	} else
		return (optimus_prime(n, m + 1));
}

/**
 *is_prime_number -  returns 1 if the input integer is a prime number
 *@n: Input integer
 *
 *Return: returns 1 if n is a prime number, otherwise 0
 */

int is_prime_number(int n)
{
	return (optimus_prime(n, 1));
}
