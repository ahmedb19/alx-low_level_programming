#include <stdio.h>

/**
 *main - multiplies two numbers
 *@argc: Arguments count
 *@argv: Array of arguments
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	} else
	{
		printf("%d\n", argv[1] * argv[2]);
	}

	return (0);
}
