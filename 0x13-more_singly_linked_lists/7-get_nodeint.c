#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns the nth node
 * @head: is the first node in listint_t
 *
 * @index: this is the index the node should return
 * Return: if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;

	for (k = 0; k < index; k++)
	{
		if (head != NULL)
		head = head->next;
	}
	return (head);
}

