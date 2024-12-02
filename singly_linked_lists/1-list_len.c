#include "lists.h"
/**
 * list_len - function that returns the number of elements
 * in a linked list_t list.
 * @h: list_h pointer to a string
 *
 * Return: size_t - the number of nodes or 0 if no nodes.
 */
size_t list_len(const list_t *h)
{
	const list_t *current = h;
	unsigned int i = 0;

	if (!current)
		return (0);

	while (current != NULL)
	{
		i++;

		current = current->next;
	}

	return (i);
}
