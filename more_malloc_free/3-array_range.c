#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: int - min value
 * @max: int - max value
 *
 * Return: int pointer
 */
int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}
