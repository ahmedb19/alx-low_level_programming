#include "main.h"

/**
 *_strncat - concatenates two strings.
 *@dest: 1st string
 *@src: 2nd string
 *@n: Number of bytes
 *
 *Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0'; j++)
		dest[i + n] = src[j];
	dest[i + n + j] = '\0';

	return (dest);
}
