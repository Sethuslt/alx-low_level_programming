#include "lists.h"
#include <stdlib.h>
/**
 * free_list - this frees a linked list
 * @head: is the list_t list that must be freed
 *
 * Description: function that frees a list_t list.
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		free(head->str);
		head = temp;
	}
}
