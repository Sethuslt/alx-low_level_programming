#include "main.h"
#include <stdlib.h>
/**
 * get_endianness - This Is A Function That checks the endianness.
 *
 * Return: 1 if endian is small,
 * otherwise 0, if endian is big.
 */
int get_endianness(void)
{
	unsigned int g = 1;
	char *j = (char *) &g;

	return ((int)*j);
}

