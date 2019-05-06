#include "lists.h"
/**
 * get_dnodeint_at_index - gets node from specific index declared in 5-main.c
 * @head: pointer to first node of linked list
 * @index: index of requested node
 * Return: node at specified index or NULL if failed
**/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i = 0;

	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
