#include "main.h"
#include <stdlib.h>

/**
 *main - adds positive numbers
 *@argc: Arguments count
 *@argv: Array of arguments
 *
 *Return: 1 If one of the number contains symbols that are not digits
 *Otherwise 0.
 */

int main(int argc, char *argv[])
{
	int s;
	char *a;

	while (--argc)
	{
		for (a = argv[argc]; *a; a++)
		{
			if (*a < '0' && *a > '9')
			{
				printf("Error\n");
				return (1);
			} else
				s += atoi(argv[argc]);
		}
	}
	printf("%d\n", s);
	return (0);
}
