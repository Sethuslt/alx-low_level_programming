#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - this is a function that read text file
 * to STDOUT
 * @letters: the letters
 * @filename: the file name with text to be read
 *
 * Return:  the actual number of letters it could read and print,
 * if function fail 0, otherwise filname is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t t;
	char *buf;
	ssize_t fd;
	ssize_t w;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	w = write(STDOUT_FILENO, buf, t);
	t = read(fd, buf, letters);

	return (w);
	free(buf);
	close(fd);
}

