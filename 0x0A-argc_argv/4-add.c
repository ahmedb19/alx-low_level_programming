#include "main.h"

/**
 *main - adds positive numbers.
 *@argc: Arguments count
 *@argv: Array of args
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int res = 0;
	char *s;

	while (--argc)
	{
		for (s = argv[argc]; *s; s++)
			if (*s < '0' || *s > '9')
				return (printf("Error\n"), 1);
		res += atoi(argv[argc]);
	}
	printf("%d\n", res);
	return (0);
}
