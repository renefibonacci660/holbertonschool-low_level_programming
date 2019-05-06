#include "lists.h"
/**
 * sum_dlistint - returns sum of all data contained in linked list
 * @head: pointer to first node in linked list
 * Return: sum of all elements in linked list or 0 if list is empty
**/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
