#include "lists.h"
/**
 * sum_listint - calculates the sum of all the data (n) of our linked list
 * @head: pointer to first element of a list
 * Return: integer of the sum of values
 */
int sum_listint(listint_t *head)
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
