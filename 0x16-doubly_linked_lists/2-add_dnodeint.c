#include "lists.h"
/**
 * add_dnodeint - Adds new node at beginning of linked list
 * @head: pointer to pointer to first node
 * @n: int value to be help in added node
 * Return: address to new node, NULL if failed
 **/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *tmp;

	if (!head)
		return (NULL);

	tmp = *head;
	newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;

	if (!*head)
	{
		*head = newNode;
		newNode->prev = NULL;
		newNode->next = NULL;
		return (newNode);
	}

	tmp->prev = newNode;
	newNode->prev = NULL;
	newNode->next = tmp;
	*head = newNode;
	return (newNode);
}
