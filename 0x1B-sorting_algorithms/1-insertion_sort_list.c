#include "sort.h"

/**
 * insertion_sort_list - Sort list
 * @list: Address of first node of list
 *
 * Return: None
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL;
	listint_t *curr_min = NULL;

	if (!list || !*list || !(*list)->next)
		return;

	current = (*list)->next;
	while (current)
	{
		while (current->n < current->prev->n)
		{
			curr_min = current->prev;
			if (curr_min->prev)
				curr_min->prev->next = curr_min->next;
			if (current->next)
				current->next->prev = current->prev;
			current->prev = curr_min->prev;
			curr_min->next = current->next;
			curr_min->prev = current;
			current->next = curr_min;
			if (!current->prev)
			{
				*list = current;
				print_list(*list);
				break;
			}
			else
				print_list(*list);
		}
		current = current->next;
	}
}
