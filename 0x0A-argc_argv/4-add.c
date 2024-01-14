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
	int i, sum = 0;
	
	for (i = 0; i < argc; i++)
	{
		sum += atoi(argv[i]);

		if (argc < 0)
			printf("0\n");
	}
	printf("%d\n", sum);

	return (0);
}
