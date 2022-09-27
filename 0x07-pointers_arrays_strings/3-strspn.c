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
	unsigned int len = 0;

	if((*s == '\0') || (*accept == '\0'))
		return len;
	while (*s && _strchr(accept, *s++))
	{
		len++;
	}
	return (len);
}
