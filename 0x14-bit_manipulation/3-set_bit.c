#include "main.h"
#include <stdlib.h>
/**
 * set_bit - This Is A FUNCTION That Sets the
 * value of a bit to one at given index.
 *
 * @n: This Is A Pointer To The Number To
 * be changed.
 * @index: Set to 1.
 *
 * Return: 1 if successful, otherwise -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	while (index > 63)
	{
		return (-1);
	}
*n = ((1UL << index) | *n);
return (1);
}

