#include "main.h"
/**
 * _strchr - locates character in string
 *
 * @s: string to locate char
 * @c: character to find
 *
 * Return: character value
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		if (*s == c)
			return (s);
	}
	return (0);
}
