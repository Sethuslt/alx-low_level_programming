#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - Is The Function That Frees
 * a Linked list.
 *
 * @head: listint_t is the list to be freed
 * passed as a parameter.
 *
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = (*head).next;
		free(temp);
	}
}

