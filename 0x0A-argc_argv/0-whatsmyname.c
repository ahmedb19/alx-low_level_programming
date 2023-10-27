#include <stdio.h>
#define UNUSED(argc) (void)(argc)
/**
 *main - prints its name, followed by a new line.
 *@argc: Argument count
 *@argv: Array of arguments
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	UNUSED(argc);

	printf("%s\n", argv[0]);

	return (0);
}
