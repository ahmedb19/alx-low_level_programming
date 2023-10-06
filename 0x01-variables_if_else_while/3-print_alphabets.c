#include <stdio.h>

/**
 *main - prints the alphabet in lowercase, and then in uppercase,
 *followed by a new line.
 *
 *Return: 0
 */

int main(void)
{
	int a, A, z, Z;

	for (a = 'a', z = 'z'; a <= z; a++)
		putchar(a);
	for (A = 'A', Z = 'Z'; A <= Z; A++)
		putchar(A);
	putchar('\n');

	return (0);
}
