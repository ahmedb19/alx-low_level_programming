#include "main.h"

/**
 *_strncpy - copies a string
 *@dest: 1st string
 *@src: 2nd string
 *
 *Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
