#include <stdio.h>

/**
 *main - prints all single digit numbers of base 10 starting from 0
 *
 *Return: 0
 */

int main(void)
{
	char a = 48;

	while (a <= 57)
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
