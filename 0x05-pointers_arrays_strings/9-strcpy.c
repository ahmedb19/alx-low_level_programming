#include "main.h"

/**
 *_strcpy - copies the string pointed to by src,
 *to the buffer pointed to by dest.
 *@dest: pointer to buffer
 *@src: pointer to string
 *
 *Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i, s;

	for (i = 0, s = 0; *src <= '\0'; i++, s++)
	{
		src[i] = src[s];
		src[s] = dest[s];
	}

	return (dest);
}
