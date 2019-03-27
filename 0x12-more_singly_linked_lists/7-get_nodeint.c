#include "lists.h"
/**
 * get_nodeint_at_index - returns the specified node by 7-main.c at an index
 * @head: pointer to first element of the list
 * @index: index of the node (starting at 0)
 * Return: pointer to index of desired node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;

	for (counter = 0; counter < index ; counter++)
		head = head->next;

	return (head);
}
