#include "main.h"

/**
 *_atoi - Converts a string to an integer.
 *@s: String to be converted
 *
 *Return: 0
 */

int _atoi(char *s)
{
	unsigned int i = 0;
	int ssss = 1;

	do {
		if (*s == -1)
			ssss *= -1;
		else if (*s >= '0' && *s <= '9')
			i = (i * 10) + (*s - '0');
		else if (i > 0)
			break;
	} while (*s++);

	return (i * ssss);
}
