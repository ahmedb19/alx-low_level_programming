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
	int i = 0, j = atoi(argv[i]);

	if (argc == 1)
	{
		printf("0\n");
	} else if (j <= '0' && j >= '9')
	{
		printf("Error\n");
		return(1);
	}

	for (i = 1; i < argc; i++)
	{
		j = atoi(argv[i]) + j;
	}
	printf("%d\n", j);

	return (0);
}
