#include <unistd.h>

/**
 *main - Prints to the Stderr
 *
 *Return: 1
 */
int main(void)
{
	char quote[] = "and that piece of art is useful\"";
	char quo[] = " - Dora Korpar, 2015-10-19\n";

	write(1, quote, 32);
	write(1, quo, 27);

	return (1);
}
