#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: array pointer of int
 * @size: int - size of array
 * @cmp: function pointer
 *
 * Return: int - index of the first element
 * for which cmp does not return 0.
 * if no elem matches return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size && size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
		{
			return (i);
		}

	return (-1);

}
