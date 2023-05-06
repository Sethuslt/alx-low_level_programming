#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - Is A Function that Changes
 * binary to unsigned int.
 *
 * @b: The string that has the binary number
 *
 * Return: Return The Converted Binary no.
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int dec_no = 0;

	if (!b)
	{
		return (0);
	}
	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		dec_no = 2 * dec_no + (b[k] - '0');
	}

	return (dec_no);
}

