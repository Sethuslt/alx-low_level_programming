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
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
size_t listint_len(const listint_t *h);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
void free_listint2(listint_t **head);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *reverse_listint(listint_t **head);
int pop_listint(listint_t **head);

#endif
