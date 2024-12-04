#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index
 * of a dlistint_t linked list.
 * @head: dlistint_t list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (!*head || !head)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (!*head)
			return (-1);
		(*head)->prev = NULL;
		free(current);
		return (1);
	}
	
	while (i < index)
	{
		if (!current)
			return (-1);
		current = current->next;
		i++;
	}

	if (!current->next)
	{
		current->prev->next = NULL;
		free(current);
		return (1);
	}

	current->prev->next = current->next;
	current->next->prev = current->prev;
	free(current);
	return (1);
}
