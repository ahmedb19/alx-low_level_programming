#include "main.h"
#include <stdlib.h>

/**
 *main - multiplies two numbers.
 *@argc: Arguments count
 *@argv: Array of args
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int a, b;
	
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	return (0);
}