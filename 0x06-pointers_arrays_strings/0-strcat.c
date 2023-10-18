#include "main.h"

/**
*_strcat - concatenates two strings.
*@dest: 1st string
*@src: 2nd string
*
*Return: Pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		if (dest[i] == '\0')
		{
			for (j = 0; src[j] != '\0'; j++)
			{
				_putchar(src[j]);
			}
		} else
			_putchar(dest[i]);
	}
	_putchar('\n');

	return (dest);
}
