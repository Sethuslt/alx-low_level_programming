#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
/**
 * struct listint_s - Is the Singly Linked List.
 * @n: Is The Interger
 * Description: This Is The Singly List Node Strucure.
 * @next: This Points To The Adjacent Node Structure.
 *
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);

#endif
