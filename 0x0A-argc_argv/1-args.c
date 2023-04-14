#include <stdio.h>
#include "main.h"

/**
 * main - print te number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (succes)
 */
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
