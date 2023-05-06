#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - This Function Sets The Value Of
 * A bit to 0.
 *
 * @n: Is The Pointer To The number to be changed.
 * @index: the index
 *
 * Return: 1 if successful, otherwise -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	while (index > 63)
	{
		return (-1);
	}
*n = (~(1UL << index) & *n);
return (1);
}

