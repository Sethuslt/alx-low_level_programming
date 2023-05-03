#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - This Is A Function that
 * reverses a linked list.
 *
 * @head: is the pointer to first node.
 *
 * Return: the pointer to first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}

	*head = previous;
	return (*head);
}

