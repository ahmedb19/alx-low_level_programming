#include "main.h"

/**
*_strlen - returns the length of a string
*@s: Pointer to a string
*
*/
int _strlen(char *s)
{
	int count;

	for (count = 0; count <= *s, *s != '\0'; count++, *s++)
		;

	return (count);
}
