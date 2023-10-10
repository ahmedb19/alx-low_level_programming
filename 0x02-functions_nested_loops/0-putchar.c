#include "main.h"

/**
 *main - prints _putchar followed by a new line.
 *
 *Return: 0
 */

int main(void)
{
	char p[9] = "_putchar";
	int i, count = 8;

	for (i = 0; i <= count; i++)
	{
		_putchar(p[i]);
	}
	_putchar('\n');

	return (0);
}
