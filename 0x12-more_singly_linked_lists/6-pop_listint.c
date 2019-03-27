#include "lists.h"
/**
 * pop_listint - deletes first element of specified list
 * @head: pointer to first node of the list
 * Return: The number inside the node that is deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int node_num;

	if (!head || !*head)
		return (0);

	node_num = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (node_num);
}
