#include "main.h"
#include <stdlib.h>
/**
 * _calloc - calloc function
 * @nmemb: number of elements
 * @size: size of bytes
 * Return: pointer or void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	new = malloc(size * nmemb);
	if (new == NULL)
		return (NULL);
	for (i = 0; i < size * nmemb; i++)
		new[i] = 0;
	return (new);
}
