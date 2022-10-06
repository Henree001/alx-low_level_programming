#include "main.h"
#include <stdlib.h>
/**
 * array_range - range of arrays
 * @min: min of arrange
 * @max: max of arrays
 * Return: int value
 */
int *array_range(int min, int max)
{
	int i, j;
	int *t;

	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)
		j++;
	t = malloc(sizeof(int) * j);
	if (t == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		t[i] = min + i;
	}
	return (t);
}
