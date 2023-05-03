#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - This Is a Function that
 * frees a Linked list
 *
 * @head: This is a pointer to the function that
 * must be freed.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}

