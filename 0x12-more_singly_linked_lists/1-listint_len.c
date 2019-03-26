#include "lists.h"

/**
 * listint_len - calculates length of list
 * @h: pointer to the begining of the list
 * Return: total amount of nodes
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
