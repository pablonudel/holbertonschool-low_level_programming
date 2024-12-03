#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: dlistint_t list
 * @n: integer
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	tmp_node = *head;

	if (tmp_node)
	{
		while (tmp_node->next)
			tmp_node = tmp_node->next;

		tmp_node->next = new_node;
		new_node->prev = tmp_node;
		return (new_node);
	}

	new_node->prev = NULL;
	*head = new_node;
	return (new_node);
}
