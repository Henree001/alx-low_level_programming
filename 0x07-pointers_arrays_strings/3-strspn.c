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
	int j = 0;
	unsigned int len = 0;

	for (; accept[j] != '\0'; j++)
	{
		if (_strchr(s, accept[j]))
			len++;
	}
	if (accept[j] == '\0')
		len++;
	return (len);
}
