#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: dlistint_t list
 *
 * Return: int - the result of the sum or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int res = 0;

	if (!head)
		return (res);

	while (head)
	{
		res += head->n;
		head = head->next;
	}

	return (res);
}
