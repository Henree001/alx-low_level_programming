#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 *
 * @s: string
 * @b: character to be filled with
 * @n: number of bytes to be filled
 *
 * Return: char value
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
