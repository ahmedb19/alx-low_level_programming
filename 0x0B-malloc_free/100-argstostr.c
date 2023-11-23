#include "main.h"

/**
 *argstostr - concatenates all the arguments of your program.
 *@ac: Arguments count
 *@av: Ptr to ptr
 *
 *Return: pointer to a new string, or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	int i, len, j, cn, ss;
	char *s;

	for (len = 0; av[len] != '\0'; len++)
		ss += len;
	s = malloc(sizeof(char) * ss + 1);
	if (s == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cn++)
			s[cn] = av[i][j];
		s[cn] = '\n';
		cn++;
	}
	s[cn] = '\0';

	return (s);
}
