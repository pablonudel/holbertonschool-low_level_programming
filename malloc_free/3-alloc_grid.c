#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: int
 * @height: int
 *
 * Return: int or NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j, **g;

	if (width < 1 || height < 1)
		return (NULL);

	g = malloc(height * sizeof(int *));

	if (g == NULL)
	{
		free (g);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		g[i] = malloc(width * sizeof(int));

		if (g[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(g[i]);
			free(g);
			return (NULL);
		}
	}


	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			g[i][j] = 0;
	}

	return (g);
}
