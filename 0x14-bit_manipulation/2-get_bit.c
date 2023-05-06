#include "main.h"
#include <stdlib.h>
/**
 * get_bit - Is The Function That Returns The Value Of an Index
 * @n: Is The pointer to number to search
 *
 * @index: Starts From 0 for the searched bit.
 *
 * Return: The value Of the bit at Index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_indx;

	while (index > 63)
	{
		return (-1);
	}
	bit_indx = (n >> index) & 1;
	return (bit_indx);
}

