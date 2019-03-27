#include "lists.h"
listint_t *create_new_node(int n);
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to first element of the list
 * @idx: index of where to insert a node
 * @n: number to be inserted into the node
 * Return: address of the newly created node or NULL if unable to be created
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp;
	listint_t *temp2;
	listint_t *new_node;

	temp = *head;
	if (!head)
		return (NULL);


	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (new_node == NULL)
		return (NULL);

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}

	if (idx == 0)
		*head = new_node;

	for (i = 0; i < idx - 1 && temp && idx != 0; i++)
		temp = temp->next;

	if (temp == NULL)
		return (NULL);

	if (idx == 0)
		new_node->next = temp;
	else
	{
		temp2 = temp->next;
		temp->next = new_node;
		new_node->next = temp2;
	}
	return (new_node);
}
