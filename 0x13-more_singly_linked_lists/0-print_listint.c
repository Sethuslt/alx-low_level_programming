#include "lists.h"
#include <stddef.h>
/**
 * print_listint - Prints Every Element Of LINKED LISTS.
 *
 * @h: Is The LINKED LIST Of A Category listint_t to be Pointed.
 *
 * Return: The Quantity Of LINKED NODES.
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
return (num);
}

