#include "main.h"

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output.
 *@filename: name of the file to read
 *@letters: Number of bytes to read
 *
 * Return: Number of bytes read/printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(fd, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(fd);
	return (bytes);
}
