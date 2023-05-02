#include "lists.h"
/**
 * listint_len - Is The Function That Return Number of
 * Elements in A Singly List Named listint_t.
 *
 * @h: The number passed as parameter.
 * Return: The Number Of listint_t Elements.
 */
size_t listint_len(const listint_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		h = (*h).next;
		num++;
	}
	return (num);
}

