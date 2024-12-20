#include "lists.h"
/**
 * list_len - function that returns the number of elements
 * in a linked list_t list.
 * @h: list_h pointer to the list
 *
 * Return: size_t - the number of nodes or 0 if no nodes.
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
