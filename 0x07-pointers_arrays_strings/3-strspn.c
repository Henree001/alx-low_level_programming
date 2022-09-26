#include "main.h"
#include "2-strchr.c"
/**
 * _strspn - length of prefix substring
 *
 * @s: string to go through
 * @accept: accepted bytes
 *
 * Return: returns usigned values
 */
unsigned int _strspn(char *s, char *accept)
{
	int j;
	unsigned int len = 0;

	for (j = 0; accept[j] != '\0'; j++)
	{
		if (_strchr(s, accept[j]))
			len++;
	}
	if (s[j] == '\0')
		return (len);
	return (len);
}
