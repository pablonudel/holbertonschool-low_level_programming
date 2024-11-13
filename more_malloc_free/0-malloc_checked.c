#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: unsigend int
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *allomem;

	allomem = malloc(b);
	if (allomem == NULL)
		exit(98);

	return (allomem);
}
