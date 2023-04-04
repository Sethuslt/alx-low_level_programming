#include "main.h"

/**
 * _strpbrk - Searches a string for any of the set of bytes
 * @accept: set of bytes to be searched
 * @s: string to be searched
 *
 * Return: if set is matched - pointer to a matched byte
 * if no set is matched - NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
