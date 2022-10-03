#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array
 * @size: size of array
 * @c: character
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size <= 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (i = 1; i <= size; i++)
		array[i] = c;
	return (array);
}
