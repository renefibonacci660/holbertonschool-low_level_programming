#include "lists.h"
/**
 * add_dnodeint_end - Adds new node at the end of linked list
 * @head: pointer to pointer to first node
 * @n: int value to be help in added node
 * Return: address to new node, NULL if failed
 **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *tmp;

	if (!head)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;

	if (!*head)
	{
		*head = newNode;
		newNode->next = NULL;
		return (newNode);
	}
	tmp = *head;

	while (tmp->next) /** has to loop or won't go to next value **/
		tmp = tmp->next;

	newNode->prev = tmp;
	tmp->next = newNode;
	newNode->next = NULL;
	return (newNode);
}
