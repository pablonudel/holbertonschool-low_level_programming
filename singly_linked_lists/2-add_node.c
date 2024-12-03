#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning
 * of a list_t list.
 * @head: list_t double pointer
 * @str: character pointer
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i = 0;

	new_node = malloc(sizeof(list_t));
	if (!new_node || !str)
		return (NULL);

	new_node->str = strdup(str);

	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	while (new_node->str[i])
		i++;


	new_node->len = i;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
