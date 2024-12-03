#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: list_t double pointer
 * @n: integer
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;

	if (*head)
	{
		new_node->prev = NULL;
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
		return (new_node);
	}

	new_node->next = NULL;
	new_node->prev = NULL;
	*head = new_node;
	return (new_node);
}
