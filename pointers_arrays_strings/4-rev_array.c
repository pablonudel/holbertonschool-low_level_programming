#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer
 * @n: numbers of element of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0, first, last;

	while (i < n)
	{
		first = a[i];
		last = a[n - 1];
		a[i] = last;
		a[n - 1] = first;
		i++;
		n--;
	}
}
