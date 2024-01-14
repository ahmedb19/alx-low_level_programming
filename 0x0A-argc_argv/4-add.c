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
	int a, b, res;

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	if (argc <= 1)
		printf("0\n");
	else if ((a >= 'a' && a <= 'z') || (b >= 'a' && b <= 'z'))
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		res = a + b;
		printf("%d\n", res);
	}

	return (0);
}
