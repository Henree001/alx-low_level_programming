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
	{}
	t = malloc(sizeof(int) * i);
	if (t == NULL)
		return (NULL);
	for (j = 0; min <= max; j++)
	{
		t[j] = min;
		min++;
	}
	return (t);
}
