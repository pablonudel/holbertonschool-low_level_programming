#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: list_h pointer to the list
 *
 * Return: size_t - the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		i++;

		h = h->next;
	}

	return (i);
}
