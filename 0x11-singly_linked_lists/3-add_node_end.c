#include "lists.h"
int length(const char *str);
list_t *nnew_node(const char *str);

/**
 * add_node_end - Adds a node at the end of a linked list.
 * @head: pointer to the first node of a linked list.
 * @str: String to include in the node.
 * Return: A pointer to the head of the linked list.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new_node;


	temp = *head;
	if (!head)
		return (NULL);
	new_node = nnew_node(str);

	if (!new_node)
		return (NULL);

	if (!*head) /** initilize list with the first node **/
	{
		*head = new_node;
		return (*head);
	}
	while (temp->next)
		temp = temp->next;

	temp->next = new_node;
	return (*head);
}

/**
 * nnew_node - creates new node
 * @str: string to add to the node content
 * Return: pointer to the allocated memory for new node
 */
list_t *nnew_node(const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = length(str);
	new_node->next = NULL;

	return (new_node);
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
