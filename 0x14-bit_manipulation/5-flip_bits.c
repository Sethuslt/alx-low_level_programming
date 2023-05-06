#include "main.h"
#include <stdlib.h>
/**
 * flip_bits - Is A FUNCTION that returns the number of bits
 * you wont need to flip to aquire from one no. to another.
 *
 * @n: Is The 1st number
 * @m: Is The 2nd number
 *
 * Return: the no. of bits to convert
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		current = exclusive >> k;
		if (current & 1)
			count++;
	}
	return (count);
}

