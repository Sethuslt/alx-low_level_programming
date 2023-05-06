#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_binary - Is a FUNCTION that prints the binary
 * representation of a no.
 *
 * @n: the Number to print
 *
 * do not use arrays
 * do not use malloc
 * do not use % or / operators
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	putchar('0' + (n & 1));
	}
}

