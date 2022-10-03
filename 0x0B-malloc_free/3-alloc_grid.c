#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - is returning a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{

	int **gridup;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	gridup = malloc(height * sizeof(int *));
	if (gridup == NULL)
	{
		free(gridup);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		gridup[i] = malloc(width * sizeof(int));
		if (gridup[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(gridup[i]);
			free(gridup);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			gridup[i][j] = 0;

	return (gridup);
}
