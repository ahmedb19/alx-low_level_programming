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

	if (!s)
		return (0);
	for (count = 0; *s != '\0'; s++)
		count++;
	return (count);
}

/**
 *create_file - creates a file
 *@filename: name of file to create
 *@text_content: Text to write
 *
 *Return: 1 on succes else 0
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, l = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (l)
		bytes = write(fd, text_content, l);
	close(fd);
	return (bytes = l ? 1 : -1);
}
