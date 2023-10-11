#include "main.h"
#include <stdio.h>

/**
 *main - finds and prints the sum of the even-valued terms,
 *followed by a new line.
 *
 *Return: 0
 */
int main(void)
{
	unsigned long f1 = 0, f2 = 0, s;
	float ts;

	while (1)
	{
		s = f1 + f2;

		if (s > 4000000)
			break;
		if ((s % 2) == 0)
			ts += s;
		f1 = f2;
		f2 = s;
	}
	printf("%0.f\n", ts);

	return (0);
}
