#include <stdio.h>
#include "main.h"

/**
 * main - prints all the arguments it receives
 * @argv: array of arguments
 * @argc: number of arguments
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
