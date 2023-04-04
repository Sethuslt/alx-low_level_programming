#include "main.h"

/**
 * _memcpy - function copies @n from @src
 * to memory area @dest
 *
 * @n: function copies
 * @dest: to memory area
 * @src: bytes from memory area
 *
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
