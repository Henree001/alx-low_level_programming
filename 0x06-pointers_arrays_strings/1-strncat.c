#include "main.h"
/**
 * _strncat - concatenates two strings
 *
 * @dest: destination of concat
 * @src: source array to concat
 * @n: number of characters to concat
 *
 * Return: char value
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest;
	int i;

	for (len_dest = 0; dest[len_dest] != '\0'; len_dest++)
	{}
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len_dest + i] = src[i];
	return (dest);
}
