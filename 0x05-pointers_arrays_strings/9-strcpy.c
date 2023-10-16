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
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
		{
			dest[i] = src[i];
			continue;
		}
	}

	return (dest);
}
