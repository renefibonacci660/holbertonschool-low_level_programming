#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at specified position in main
 * @h: pointer to pointer of first node in linked list
 * @idx: placement for new node
 * @n: number value assigned to node
 * Return: address of new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode;
	dlistint_t *tmp;
	unsigned int counter;

	if (!h || (!*h && idx != 0))
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);
	newNode->n = n;

	if (!newNode)
		return (NULL);

	tmp = *h;

	if (idx == 0)
	{
		if (*h)
		{
			tmp->prev = newNode;
			newNode->next = tmp;
			*h = newNode;
		}
		else
			*h = newNode;

		return (newNode);
	}

	for (counter = 0; tmp->next || counter == idx - 1; counter++)
	{
		if (counter == idx - 1 && tmp->next)
		{
			tmp->next->prev = newNode;
			newNode->next = tmp->next;
			tmp->next = newNode;
			newNode->prev = tmp;
			return (newNode);
		}
		tmp = tmp->next;
	}

	free(newNode);
	return (NULL);
}
