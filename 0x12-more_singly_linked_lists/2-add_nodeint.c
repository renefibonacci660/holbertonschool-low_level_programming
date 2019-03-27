#include "lists.h"
/**
 * add_nodeint - adds node at the beginning of the list
 * @head: pointer to the beginning of the list
 * @n: number to add to the node this function creates
 * Return: pointer to head of the list, NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;

	new->n = n;
	*head = new;

	return (*head);
}
