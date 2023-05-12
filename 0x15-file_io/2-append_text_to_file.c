#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * append_text_to_file - This Is a function that appends text
 * at the end of a file
 * @text_content: This represents the string to be added
 * to the end of the file
 * @filename: represents a pointer to the name of the file
 *
 * Return: if function fails or filename is NULL --1
 * IF no file --1, otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len, o, w = 0;

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	while (filename == NULL)
	{
		return (-1);
	}
	w = write(w, text_content, len);
	o = open(filename, O_WRONLY | O_APPEND);

	if (w == -1 || o == -1)
	{
		return (-1);
	}
	close(o);
	return (1);
}
