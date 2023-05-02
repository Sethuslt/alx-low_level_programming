#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - Adjoin a new Node at the start of
 * singly linked list listint_t.
 * @n: The Data To Insert For New Node.
 * @head: This Is The Pointer To The First Node
 * Of The listint_t list.
 *
 * Return: The Pointer To New NODE,
 * NULL if unsuccessful.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *modern_node;

	modern_node = malloc(sizeof(listint_t));
	if (!modern_node)
	{
		return (NULL);
	}
	modern_node->next = *head;
	modern_node->n = n;
	*head = modern_node;

	return (modern_node);
}

