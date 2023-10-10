#include "main.h"

/**
 *_isalpha - checks for alphabetic characters
 *@c: Character to be checked
 *
 * Return: 1 if c is a letter, lowercase or uppercase.
 * Otherwise 0.
 */
int _isalpha(int c)
{
	if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
		return (0);
	else
		return (0);
}
