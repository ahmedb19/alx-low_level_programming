#include "main.h"

/**
 *get_endianness - returns the endiannes of the system
 *
 *Return: 0 if endian is big, otherwise 1
 */

int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
