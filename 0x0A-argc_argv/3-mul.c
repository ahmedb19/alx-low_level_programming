#include <stdio.h>
#include <stdlib.h>

/**
 *main - multiplies two numbers
 *@argc: Arguments count
 *@argv: Array of arguments
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j;

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	printf("%d\n", i * j);

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
