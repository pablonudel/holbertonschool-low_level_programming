#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: list_h pointer to a string
 *
 * Return: size_t - the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	unsigned int i = 0;

	if (!current)
		printf("[0] (nil)\n");
		return (1);

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current->len, current->str);

		i++;

		current = current->next;
	}

	return (i);
}
