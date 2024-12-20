#include "function_pointers.h"
/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array.
 * @array: array pointer of int
 * @size: size type
 * @action: function pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
