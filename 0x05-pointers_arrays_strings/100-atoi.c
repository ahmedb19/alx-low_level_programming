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
	int si = 1;

	while (*s++)
	{
		if (*s == -1)
			si *= -1;
		else if (*s >= '0' && *s <= '9')
			i = (i * 10) + (*s - '0');
		else if (i > 0)
			break;
	}

	return (i * si);
}
