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

/**
 * main - this function copies the content of a file to another file
 * @argv: array of pointers To the Arguments
 * @argc: this is The no. of arguments given to the program
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int w, to, r, from;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	buffer = create_buffer(argv[2]);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buffer);
	close_file(from);
	close_file(to);
	return (0);
}


