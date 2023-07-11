#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function code
 * @width: input
 * @height: input
 * Return: pointer to 2 dim.
 */
int **alloc_grid(int width, int height)
{
	int **array2;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	array2 = malloc(sizeof(int *) * height);

	if (array2 == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		array2[x] = malloc(sizeof(int) * width);
		if (array2[x] == NULL)
		{
			for (; x >= 0; x--)
				free(array2[x]);

			free(array2);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			array2[x][y] = 0;
	}

	return (array2);
}
