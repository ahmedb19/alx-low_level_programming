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
	int i, j;

	if (argc == 1)
	{
		printf("0\n");
	} else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] >= 'a' && *argv[i] <= 'z')
			{
				printf("Error\n");
				return (1);
			}
			j = atoi(argv[i]) + j;
		}
		printf("%d\n", j);
	}

	return (0);
}
