#include "main.h"

/**
 *prime_check - checks if a given integer is prime
 *@n: given integer
 *@i: integer
 *
 *Return: 0 or 1 if n is prime
 */
int prime_check(int n, int i)
{
	if (n == 2)
		return (1);
	else if (n % i == 0)
		return (0);
	else if (i >= n / 2)
		return (1);
	else
		return (prime_check(n, i + 1));
}

/**
 *is_prime_number - checks if n is prime or not
 *@n: Integer
 *
 *Return: 1 if n is prime otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (prime_check(n, 1));
}
