#include <stdio.h>

/**
 *main - prints the alphabet in lowercase, followed by a new line
 *
 *Return: 0
 */

int main(void)
{
	int a, z;

	for (a = 'a', z = 'z'; a <= z; a++)
		putchar('a');
	putchar('\n');

	return 0;
}
