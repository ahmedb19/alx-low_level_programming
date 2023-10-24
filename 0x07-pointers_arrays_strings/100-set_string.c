#include "main.h"

/**
 *set_string - sets the value of a pointer to a char.
 *@str: Pointer to pointer
 *@to: Character
 *
 */

void set_string(char **s, char *to)
{
	*s = to;
}
