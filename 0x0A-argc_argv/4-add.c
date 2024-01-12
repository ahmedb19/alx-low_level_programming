#include "main.h"
#include <stdlib.h>

/**
 *main - adds positive numbers.
 *@argc: Arguments count
 *@argv: Array of args
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i, res;

	if (argc < 1)
		printf("0\n");
	else if (argv[i] => 'a' && argv[i] <= 'z')
	{
		printf("Error\n");
		return (1);
	} else
	{
		for (i = 0; i < argc; i++)
		{
			res += atoi(argv[i]);
		}
		printf("%d\n", res);
	}
	return (0);
}
