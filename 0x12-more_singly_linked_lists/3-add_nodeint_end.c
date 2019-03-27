
#include "lists.h"
listint_t *create_node(const int n);

/**
 * add_nodeint_end - Adds a node at the end of a list
 * @head: Pointer to the beginning of a list
 * @n: number to add to the node
 * Return: A pointer to the beginning of the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (*head);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = new_node;

	return (*head);
}
