#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a dlistint_t linked list
 * @head: dlistint_t list
 * @index: index of node;
 *
 * Return: return n of the node or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	if (!head || !index)
		return (NULL);

	while (i < index)
	{
		if (!current)
			return (NULL);
		current = current->next;
		i++;
	}

	return (current);
}
