#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - Is The  function that returns the sum of all
 * the data (n) of a listint_t linked list
 *
 * @head: is the pointer of the head of
 * the list as a parameter.
 *
 * Return: sum , otherwise return 0
 * if list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
