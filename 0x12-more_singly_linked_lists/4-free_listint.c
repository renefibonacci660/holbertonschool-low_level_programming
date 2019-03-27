#include "lists.h"
/**
 * free_listint - frees list of nodes specified in 4-main.c
 * @head: pointer to first element of the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}
