#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - creates matrix
 * @width: width of array
 * @height: height of array
 * Return: pointer of new grid
 */
int **alloc_grid(int width, int height)
{
	int i, **new, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	new = malloc(sizeof(int *) * height);
	if (new == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		new[i] = malloc(sizeof(int) * width);
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			new[i][j] = 0;
	return (new);
}
