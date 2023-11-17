#include "main.h"
#include <stdlib.h>

/**
 *main - multiplies two numbers
 *@argc: Argument count
 *@argv: Array of arguments
 *
 *Return: 1 if agrc is lower than 3 otherwise 0
 */

int main(int argc, char *argv[])
{
	int sum, a, b;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		sum = a * b;

		printf("%d\n", sum);
	}

	return (0);
}
