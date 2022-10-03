#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concats strings
 * @s1: string 1
 * @s2: string 2
 * Return: returns concated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *new;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{}
	for (j = 0; s2[j] != '\0'; j++)
	{}
	new = malloc(sizeof(char) * (i + j + 1));
	if (new == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		new[k] = s1[k];
	for (k = 0; k < j; k++)
		new[k + i] = s2[k];
	new[k + i] = '\0';
	return (new);
}
