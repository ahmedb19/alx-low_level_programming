#include "main.h"

/**
*_strlen - returns the length of a string
*@s: Pointer to a string
*
*Return: length of a string
*/

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		count++;

	return (count);
}

/**
 *argstostr - concatenates all the arguments of your program.
 *@ac: Arguments count
 *@av: Ptr to ptr
 *
 *Return: pointer to a new string, or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	int i, j, cn = 0, ss = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, ss++)
		ss += _strlen(av[i]);

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
