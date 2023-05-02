#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - This Is A Function That adds
 * A Node AT The End Of the list.
 * @n: Is The 2ND Parameter.
 * @head: Is The 1st Parameter.
 *
 * Return: If Function fails, NULL
 * OTHERWISE, the address of new element.
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *modern_node, *last_node;

	modern_node = malloc(sizeof(listint_t));
	if (modern_node == NULL)
	{
		return (NULL);
	}
	modern_node->n = n;
	modern_node->next = NULL;

	if (*head == NULL)
	{
		*head = modern_node;
	}
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
		last_node->next = modern_node;
	}
	return (*head);
}
