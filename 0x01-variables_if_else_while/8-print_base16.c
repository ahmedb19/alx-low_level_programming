#include <stdio.h>

/**
 *main - prints all the numbers of base 16 in lowercase
 *
 *Return: 0
 */

int main(void)
{
	int i, s;

	for (i = '0'; i <= 9; i++)
		putchar(i);
	for (s = 'a'; s <= 'f'; s++)
		putchar(s);
	putchar('\n');

	return (0);
}
