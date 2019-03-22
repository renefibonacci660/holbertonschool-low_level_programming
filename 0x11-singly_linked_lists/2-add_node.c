#include "lists.h"
int length(const char *str);
/**
 * add_node - creates a new node and adds it to the passed linked list
 * @head: pointer to head of linked list
 * @str: string assigned to new node
 * Return: pointer to head of linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	if (!*head) /*initialzes the next pointer to NULL*/
		new_node->next = NULL;
	else /*moves new node to the head*/
		new_node->next = *head;

	new_node->str = strdup(str);
	new_node->len = length(str);
	*head = new_node;
	return (*head);
}

/**
 * length - calculates the length of string
 * @str: constant string
 * Return: length of string
 */
int length(const char *str)
{
	int i = 0;

	if (!str)
		return (0);

	while (str[i] != '\0')
		i++;

	return (i);
}
