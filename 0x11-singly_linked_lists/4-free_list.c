#include "lists.h"
/**
 * free_list - frees list of nodes passed from 4-main.c
 * @head: pointer to the first element of the list
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (!head)
		return;
	while (head->next)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
	free(head->str);
	free(head);
}
