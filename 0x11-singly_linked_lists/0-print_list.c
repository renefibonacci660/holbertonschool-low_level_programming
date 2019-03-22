#include "lists.h"

/**
 * print_list - prints all of the elements of passed linked list
 * @h: pointer to head of linked list
 * Return: total number of nodes in the linked list
 */
size_t print_list(const list_t *h)
{
	int i;

	if (!h)
		return (0);

	for (i = 1; h->next; i++)
	{
		if (!h->str)
			printf("[%u] %s\n", h->len, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (i);
}
