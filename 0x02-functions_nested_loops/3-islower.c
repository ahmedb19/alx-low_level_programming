#include "main.h"

/**
 *_islower - checks for lowercase character
 *@c: Character to be checked
 *
 *Return: 1 if c is lowercase, Otherwise 0
 */

int _islower(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	return (0);
}
