#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates string
 * @str: string to copy
 * Return: char to newly duplicated string
 */
char *_strdup(char *str)
{
	int i, j;
	char *new;

	if (str == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
	{}
	new = malloc(sizeof(str) * j);
	for (i = 0; i < j; i++)
	{
		new[i] = str[i];
	}
	return (new);
}
