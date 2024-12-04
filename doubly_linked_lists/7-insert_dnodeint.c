#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: dlistint_t list
 * @idx: index of the list where the new node should be added
 * @n: the integer to be added
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *prev_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	prev_node = *h;
	while (i < idx - 1)
	{
		if (!prev_node)
			return (NULL);
		prev_node = prev_node->next;
		i++;
	}

	if (!prev_node->next)
		return (add_dnodeint_end(h, n));

	new_node->prev = prev_node;
	new_node->next = prev_node->next;
	prev_node->next = new_node;
	return (new_node);
}
