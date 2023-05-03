#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - eliminate the haed of the node
 *
 * @head: pointer to the 1st element
 *
 * Return: if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	int k;
	listint_t *tmp;

	if (!head || !*head)
	{
		return (0);
	}
	k = (*head)->n;
	tmp = (*head)->next;
	*head = tmp;
	free(*head);

	return (k);
}
