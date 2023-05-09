#include "main.h"
#include <stdlib.h>
#include <stdio.h>
void close_file(int fd);
char *create_buffer(char *file);
/**
 * create_buffer - This function allocates 1024 bytes
 * @file: this is where file buffer store chars
 *
 * Return: must return a pointer
 * to a new allocated buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - this function closes the file desciptors
 * @fd: this indicates the file dscriptor to be closed
 */
void close_file(int fd)
{
	int q;

	q = close(fd);

	if (q == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
