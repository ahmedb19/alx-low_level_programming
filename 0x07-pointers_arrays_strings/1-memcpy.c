#include "main.h"

/**
 *_memcpy - copies memory area
 *@n: Number of bytes
 *@src: memory area
 *@dest: memory area
 *
 *Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
