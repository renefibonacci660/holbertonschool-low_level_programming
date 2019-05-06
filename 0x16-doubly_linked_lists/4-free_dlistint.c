#include "lists.h"
/**
 * free_dlistint - frees doubly linked list
 * @head: pointer to the first node of linked list
**/
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}

	free(head);
}
