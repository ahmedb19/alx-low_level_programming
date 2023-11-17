#include "main.h"
#include <stdlib.h>
/**
 *main - adds positive numbers
 *@argc: Number of arguments
 *@argv: Array of arguments
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int s = 0;
	char *saturn;

	while (--argc)
	{
		for (saturn = argv[argc]; *saturn; saturn++)
			if (*saturn < '0' || *saturn > '9')
				return (printf("Error\n"), 1);
		s += atoi(argv[argc]);
	}
	printf("%d\n", s);

	return (0);
}
