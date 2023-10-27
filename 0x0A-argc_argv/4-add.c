#include <stdio.h>
#include <stdlib.h>

/**
 *main - adds positive numbers
 *@argc: arguments count
 *@argv: Array of arguments
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, a = 0;
	char *c;

	if (argc == 1)
	{
		printf("0\n");
	} else
	{
		for (i = 1; i < argc; i++)
		{
			for (c = argv[argc]; *c; c++)
			{
				if (*c < '0' || *c > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			j = atoi(argv[i]);
			a += j;
		}
		printf("%d\n", a);
	}

	return (0);
}
